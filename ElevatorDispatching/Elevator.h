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
	int elevatorID;  //电梯ID
	int currentLevel;  //当前楼层
	int elevatorStatus;   //电梯运行状态，0为UP，1为DOWN，2为STOP
	bool runThread;      //电梯是否处于工作状态
	thread *elevatorRun;   //创建线程

public:
	std::mutex locker;
	Elevator(int inElevatorID, int inCurrentLevel);  //初始化电梯对象
	vector<Request *>  RequestList;  //请求楼层的列表
	vector<Request *>  ArriveList;  //到达楼层的列表
	void run();   //在电梯间建立线程，运行电梯
	void move();
	void clientArrive();  //检测是否有到达的楼层

	bool addRequest(int src, int det);   //在RequestList添加元素
	bool addArrive(int src, int det);   //在addArrive添加元素

	int getElevatorStatus();   //获取电梯运行状态
	void setElevatorStatus(int state);  //设置电梯运行状态
	int getElevatorCurrentLevel();   //获取电梯当前楼层

	~Elevator();
};

