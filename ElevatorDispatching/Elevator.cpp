#include "stdafx.h"
#include "Elevator.h"

//利用构造函数创建电梯对象
Elevator::Elevator(int inElevatorID, int inCurrentLevel)
{
	elevatorID = inElevatorID;
	currentLevel = inCurrentLevel;
	elevatorStatus = STOP;
	runThread = TRUE;
	elevatorRun = new thread(&Elevator::run, this);
	elevatorRun->detach();
}

void Elevator::run()
{
	while (this->runThread)
	{
		while (!RequestList.empty() || !ArriveList.empty())
		{
			//locker.lock();
			move();
			//locker.unlock();
		}
		elevatorStatus = STOP;
	}
}

void Elevator::move()
{

	for (vector<Request *>::iterator i = RequestList.begin(); i != RequestList.end();)
	{
		if ((*i)->srclevel == currentLevel)
		{
			if (ArriveList.empty())
			{
				this->elevatorStatus = (((*i)->detlevel - (*i)->srclevel) > 0 ? UP : DOWN);
			}
			addArrive((*i)->srclevel, (*i)->detlevel);
			delete((*i));
			i = RequestList.erase(i);
			continue;
		}
		i++;
	}
	if (elevatorStatus == UP)
	{
		CElevatorDispatchingDlg *dlg = (CElevatorDispatchingDlg*)AfxGetApp()->GetMainWnd();
		if (this->elevatorID == 1) {
			dlg->Control("Left", currentLevel, 0);
			dlg->UpdateWindow();
			dlg->Control("Left", currentLevel + 1, 1);
		}
		else if (this->elevatorID == 2)
		{
			dlg->Control("Right", currentLevel, 0);
			dlg->UpdateWindow();
			dlg->Control("Right", currentLevel + 1, 1);
		}
		currentLevel++;
	}
	else if (elevatorStatus == DOWN)
	{
		CElevatorDispatchingDlg *dlg = (CElevatorDispatchingDlg*)AfxGetApp()->GetMainWnd();
		if (this->elevatorID == 1) {
			dlg->Control("Left", currentLevel, 0);
			dlg->UpdateWindow();
			dlg->Control("Left", currentLevel - 1, 1);
		}
		else if (this->elevatorID == 2)
		{
			dlg->Control("Right", currentLevel, 0);
			dlg->UpdateWindow();
			dlg->Control("Right", currentLevel - 1, 1);
		}
		currentLevel--;
	}
	clientArrive();

}

void Elevator::clientArrive()
{
	for (vector<Request *>::iterator i = ArriveList.begin(); i != ArriveList.end(); )
	{
		if ((*i)->detlevel == getElevatorCurrentLevel())
		{
			Sleep(2000);
			delete((*i));
			i = ArriveList.erase(i);
			continue;
		}
		if (ArriveList.size() == 0)
		{
			this->elevatorStatus = STOP;
		}
		i++;
	}
}

bool Elevator::addRequest(int src, int det)
{
	Request *client = new Request(src, det);
	if (RequestList.size() == 0) {
		RequestList.push_back(client);
	}
	else
	{
		for (vector<Request *>::iterator i = RequestList.begin(); i != RequestList.end(); i++)
		{
			if ((*i)->srclevel >= client->srclevel)
			{
				RequestList.insert(i, client);
				break;
			}
		}
	}
	return true;
}

bool Elevator::addArrive(int src, int det)
{
	Request *client = new Request(src, det);
	if (ArriveList.size() == 0) {
		ArriveList.push_back(client);
	}
	else
	{
		for (vector<Request *>::iterator i = ArriveList.begin(); i != ArriveList.end(); i++)
		{
			if ((*i)->detlevel >= client->detlevel)
			{
				ArriveList.insert(i, client);
				break;
			}
		}
	}
	return true;
}

int Elevator::getElevatorStatus()
{
	return this->elevatorStatus;
}

void Elevator::setElevatorStatus(int state)
{
	this->elevatorStatus = state;
}

int Elevator::getElevatorCurrentLevel()
{
	int floor = NULL;
	CElevatorDispatchingDlg *dlg = (CElevatorDispatchingDlg*)AfxGetApp()->GetMainWnd();
	if (this->elevatorID == 1) {
		floor = dlg->Judge("Left");
	}
	else if (this->elevatorID == 2)
	{
		floor = dlg->Judge("Right");
	}
	return floor;
}


Elevator::~Elevator()
{
}
