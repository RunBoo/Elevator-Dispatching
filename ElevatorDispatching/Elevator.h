#pragma once
#include <vector>
#include <thread>
#include <mutex>
#include "Request.h"
#include "ElevatorDispatchingDlg.h"
#define UP 0
#define DOWN 1
#define STOP 2

class Elevator
{
private:
	int elevatorID;  //����ID
	int currentLevel;  //��ǰ¥��
	int elevatorStatus;   //��������״̬��0ΪUP��1ΪDOWN��2ΪSTOP
	bool runThread;      //�����Ƿ��ڹ���״̬
	thread *elevatorRun;   //�����߳�

public:
	std::mutex locker;
	Elevator(int inElevatorID, int inCurrentLevel);  //��ʼ�����ݶ���
	vector<Request *>  RequestList;  //����¥����б�
	vector<Request *>  ArriveList;  //����¥����б�
	void run();   //�ڵ��ݼ佨���̣߳����е���
	void move();
	void clientArrive();  //����Ƿ��е����¥��

	bool addRequest(int src, int det);   //��RequestList���Ԫ��
	bool addArrive(int src, int det);   //��addArrive���Ԫ��

	int getElevatorStatus();   //��ȡ��������״̬
	void setElevatorStatus(int state);  //���õ�������״̬
	int getElevatorCurrentLevel();   //��ȡ���ݵ�ǰ¥��

	~Elevator();
};

