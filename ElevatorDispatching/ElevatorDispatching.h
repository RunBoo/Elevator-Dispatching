
// ElevatorDispatching.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CElevatorDispatchingApp: 
// �йش����ʵ�֣������ ElevatorDispatching.cpp
//

class CElevatorDispatchingApp : public CWinApp
{
public:
	CElevatorDispatchingApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CElevatorDispatchingApp theApp;