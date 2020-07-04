
// ElevatorDispatchingDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ElevatorDispatching.h"
#include "ElevatorDispatchingDlg.h"
#include "afxdialogex.h"
#include "Elevator.h"
#include "Request.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���
class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CElevatorDispatchingDlg �Ի���



CElevatorDispatchingDlg::CElevatorDispatchingDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ELEVATORDISPATCHING_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CElevatorDispatchingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CElevatorDispatchingDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_UP0, &CElevatorDispatchingDlg::OnBnClickedButtonUp0)
	ON_BN_CLICKED(IDC_BUTTON_UP1, &CElevatorDispatchingDlg::OnBnClickedButtonUp1)
	ON_BN_CLICKED(IDC_BUTTON_Down1, &CElevatorDispatchingDlg::OnBnClickedButtonDown1)
	ON_BN_CLICKED(IDC_BUTTON_UP2, &CElevatorDispatchingDlg::OnBnClickedButtonUp2)
	ON_BN_CLICKED(IDC_BUTTON_Down2, &CElevatorDispatchingDlg::OnBnClickedButtonDown2)
	ON_BN_CLICKED(IDC_BUTTON_UP3, &CElevatorDispatchingDlg::OnBnClickedButtonUp3)
	ON_BN_CLICKED(IDC_BUTTON_Down3, &CElevatorDispatchingDlg::OnBnClickedButtonDown3)
	ON_BN_CLICKED(IDC_BUTTON_UP4, &CElevatorDispatchingDlg::OnBnClickedButtonUp4)
	ON_BN_CLICKED(IDC_BUTTON_Down4, &CElevatorDispatchingDlg::OnBnClickedButtonDown4)
	ON_BN_CLICKED(IDC_BUTTON_UP5, &CElevatorDispatchingDlg::OnBnClickedButtonUp5)
	ON_BN_CLICKED(IDC_BUTTON_Down5, &CElevatorDispatchingDlg::OnBnClickedButtonDown5)
	ON_BN_CLICKED(IDC_BUTTON_UP6, &CElevatorDispatchingDlg::OnBnClickedButtonUp6)
	ON_BN_CLICKED(IDC_BUTTON_Down6, &CElevatorDispatchingDlg::OnBnClickedButtonDown6)
	ON_BN_CLICKED(IDC_BUTTON_UP7, &CElevatorDispatchingDlg::OnBnClickedButtonUp7)
	ON_BN_CLICKED(IDC_BUTTON_Down7, &CElevatorDispatchingDlg::OnBnClickedButtonDown7)
	ON_BN_CLICKED(IDC_BUTTON_Down8, &CElevatorDispatchingDlg::OnBnClickedButtonDown8)
	ON_BN_CLICKED(IDC_BUTTONLeft0, &CElevatorDispatchingDlg::OnBnClickedButtonleft0)
	ON_BN_CLICKED(IDC_BUTTONLeft1, &CElevatorDispatchingDlg::OnBnClickedButtonleft1)
	ON_BN_CLICKED(IDC_BUTTONLeft2, &CElevatorDispatchingDlg::OnBnClickedButtonleft2)
	ON_BN_CLICKED(IDC_BUTTONLeft3, &CElevatorDispatchingDlg::OnBnClickedButtonleft3)
	ON_BN_CLICKED(IDC_BUTTONLeft4, &CElevatorDispatchingDlg::OnBnClickedButtonleft4)
	ON_BN_CLICKED(IDC_BUTTONLeft5, &CElevatorDispatchingDlg::OnBnClickedButtonleft5)
	ON_BN_CLICKED(IDC_BUTTONLeft6, &CElevatorDispatchingDlg::OnBnClickedButtonleft6)
	ON_BN_CLICKED(IDC_BUTTONLeft7, &CElevatorDispatchingDlg::OnBnClickedButtonleft7)
	ON_BN_CLICKED(IDC_BUTTONLeft8, &CElevatorDispatchingDlg::OnBnClickedButtonleft8)
	ON_BN_CLICKED(IDC_BUTTONRight0, &CElevatorDispatchingDlg::OnBnClickedButtonright0)
	ON_BN_CLICKED(IDC_BUTTONRight1, &CElevatorDispatchingDlg::OnBnClickedButtonright1)
	ON_BN_CLICKED(IDC_BUTTONRight2, &CElevatorDispatchingDlg::OnBnClickedButtonright2)
	ON_BN_CLICKED(IDC_BUTTONRight3, &CElevatorDispatchingDlg::OnBnClickedButtonright3)
	ON_BN_CLICKED(IDC_BUTTONRight4, &CElevatorDispatchingDlg::OnBnClickedButtonright4)
	ON_BN_CLICKED(IDC_BUTTONRight5, &CElevatorDispatchingDlg::OnBnClickedButtonright5)
	ON_BN_CLICKED(IDC_BUTTONRight6, &CElevatorDispatchingDlg::OnBnClickedButtonright6)
	ON_BN_CLICKED(IDC_BUTTONRight7, &CElevatorDispatchingDlg::OnBnClickedButtonright7)
	ON_BN_CLICKED(IDC_BUTTONRight8, &CElevatorDispatchingDlg::OnBnClickedButtonright8)
END_MESSAGE_MAP()


// CElevatorDispatchingDlg ��Ϣ�������

BOOL CElevatorDispatchingDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
	elevatorOne = new Elevator(1, 1);
	elevatorTwo = new Elevator(2, 1);
	//�������̣߳�����ѡ�����ŵ�elevator�����߳����ڻ�ȡ���������
	thread th(&CElevatorDispatchingDlg::elevatorSelec, this);
	th.detach();
	

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CElevatorDispatchingDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CElevatorDispatchingDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CElevatorDispatchingDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

#pragma region ������µ���

void CElevatorDispatchingDlg::OnBnClickedButtonUp0()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 0 || Level2 == 0)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 0) <= abs(Level2 - 0))
		{
			Request *client = new Request(Level1, 0);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 0);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonUp1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 1 || Level2 == 1)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 1) <= abs(Level2 - 1))
		{
			Request *client = new Request(Level1, 1);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 1);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonDown1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 1 || Level2 == 1)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 1) <= abs(Level2 - 1))
		{
			Request *client = new Request(Level1, 1);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 1);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonUp2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 2 || Level2 == 2)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 2) <= abs(Level2 - 2))
		{
			Request *client = new Request(Level1, 2);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 2);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonDown2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 2 || Level2 == 2)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 2) <= abs(Level2 - 2))
		{
			Request *client = new Request(Level1, 2);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 2);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonUp3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 3 || Level2 == 3)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 3) <= abs(Level2 - 3))
		{
			Request *client = new Request(Level1, 3);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 3);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonDown3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 3 || Level2 == 3)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 3) <= abs(Level2 - 3))
		{
			Request *client = new Request(Level1, 3);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 3);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonUp4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 4 || Level2 == 4)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 4) <= abs(Level2 - 4))
		{
			Request *client = new Request(Level1, 4);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 4);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonDown4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 4 || Level2 == 4)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 4) <= abs(Level2 - 4))
		{
			Request *client = new Request(Level1, 4);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 4);
			allRequest.push_back(client);
		}
	}
	
}


void CElevatorDispatchingDlg::OnBnClickedButtonUp5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 5 || Level2 == 5)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 5) <= abs(Level2 - 5))
		{
			Request *client = new Request(Level1, 5);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 5);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonDown5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 5 || Level2 == 5)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 5) <= abs(Level2 - 5))
		{
			Request *client = new Request(Level1, 5);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 5);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonUp6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 6 || Level2 == 6)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 6) <= abs(Level2 - 6))
		{
			Request *client = new Request(Level1, 6);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 6);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonDown6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 6 || Level2 == 6)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 6) <= abs(Level2 - 6))
		{
			Request *client = new Request(Level1, 6);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 6);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonUp7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 7 || Level2 == 7)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 7) <= abs(Level2 - 7))
		{
			Request *client = new Request(Level1, 7);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 7);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonDown7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 7 || Level2 == 7)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 7) <= abs(Level2 - 7))
		{
			Request *client = new Request(Level1, 7);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 7);
			allRequest.push_back(client);
		}
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonDown8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level1 = elevatorOne->getElevatorCurrentLevel();
	int Level2 = elevatorTwo->getElevatorCurrentLevel();
	if (Level1 == 8 || Level2 == 8)
	{
		NULL;
	}
	else
	{
		if (abs(Level1 - 8) <= abs(Level2 - 8))
		{
			Request *client = new Request(Level1, 8);
			allRequest.push_back(client);
		}
		else
		{
			Request *client = new Request(Level2, 8);
			allRequest.push_back(client);
		}
	}
	
}
#pragma endregion

#pragma region �����ݵ��ѡ������¥��

void CElevatorDispatchingDlg::OnBnClickedButtonleft0()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorOne->getElevatorCurrentLevel();
	if (elevatorOne->getElevatorStatus() == UP && 0 > Level)
	{
		elevatorOne->addRequest(Level, 0);
	}
	else if (elevatorOne->getElevatorStatus() == DOWN && 0 < Level)
	{
		elevatorOne->addRequest(Level, 0);
	}
	else if (elevatorOne->getElevatorStatus() == STOP && 0 != Level)
	{
		elevatorOne->addRequest(Level, 0);
		int temp = (0 - Level) > 0 ? UP : DOWN;
		elevatorOne->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonleft1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorOne->getElevatorCurrentLevel();
	if (elevatorOne->getElevatorStatus() == UP && 1 > Level)
	{
		elevatorOne->addRequest(Level, 1);
	}
	else if (elevatorOne->getElevatorStatus() == DOWN && 1 < Level)
	{
		elevatorOne->addRequest(Level, 1);
	}
	else if (elevatorOne->getElevatorStatus() == STOP && 1 != Level)
	{
		elevatorOne->addRequest(Level, 1);
		int temp = (1 - Level) > 0 ? UP : DOWN;
		elevatorOne->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonleft2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorOne->getElevatorCurrentLevel();
	if (elevatorOne->getElevatorStatus() == UP && 2 > Level)
	{
		elevatorOne->addRequest(Level, 2);
	}
	else if (elevatorOne->getElevatorStatus() == DOWN && 2 < Level)
	{
		elevatorOne->addRequest(Level, 2);
	}
	else if (elevatorOne->getElevatorStatus() == STOP && 2 != Level)
	{
		elevatorOne->addRequest(Level, 2);
		int temp = (2 - Level) > 0 ? UP : DOWN;
		elevatorOne->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonleft3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorOne->getElevatorCurrentLevel();
	if (elevatorOne->getElevatorStatus() == UP && 3 > Level)
	{
		elevatorOne->addRequest(Level, 3);
	}
	else if (elevatorOne->getElevatorStatus() == DOWN && 3 < Level)
	{
		elevatorOne->addRequest(Level, 3);
	}
	else if (elevatorOne->getElevatorStatus() == STOP && 3 != Level)
	{
		elevatorOne->addRequest(Level, 3);
		int temp = (3 - Level) > 0 ? UP : DOWN;
		elevatorOne->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonleft4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorOne->getElevatorCurrentLevel();
	if (elevatorOne->getElevatorStatus() == UP && 4 > Level)
	{
		elevatorOne->addRequest(Level, 4);
	}
	else if (elevatorOne->getElevatorStatus() == DOWN && 4 < Level)
	{
		elevatorOne->addRequest(Level, 4);
	}
	else if (elevatorOne->getElevatorStatus() == STOP && 4 != Level)
	{
		elevatorOne->addRequest(Level, 4);
		int temp = (4 - Level) > 0 ? UP : DOWN;
		elevatorOne->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonleft5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorOne->getElevatorCurrentLevel();
	if (elevatorOne->getElevatorStatus() == UP && 5 > Level)
	{
		elevatorOne->addRequest(Level, 5);
	}
	else if (elevatorOne->getElevatorStatus() == DOWN && 5 < Level)
	{
		elevatorOne->addRequest(Level, 5);
	}
	else if (elevatorOne->getElevatorStatus() == STOP && 5 != Level)
	{
		elevatorOne->addRequest(Level, 5);
		int temp = (5 - Level) > 0 ? UP : DOWN;
		elevatorOne->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonleft6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorOne->getElevatorCurrentLevel();
	if (elevatorOne->getElevatorStatus() == UP && 6 > Level)
	{
		elevatorOne->addRequest(Level, 6);
	}
	else if (elevatorOne->getElevatorStatus() == DOWN && 6 < Level)
	{
		elevatorOne->addRequest(Level, 6);
	}
	else if (elevatorOne->getElevatorStatus() == STOP && 6 != Level)
	{
		elevatorOne->addRequest(Level, 6);
		int temp = (6 - Level) > 0 ? UP : DOWN;
		elevatorOne->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonleft7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorOne->getElevatorCurrentLevel();
	if (elevatorOne->getElevatorStatus() == UP && 7 > Level)
	{
		elevatorOne->addRequest(Level, 7);
	}
	else if (elevatorOne->getElevatorStatus() == DOWN && 7 < Level)
	{
		elevatorOne->addRequest(Level, 7);
	}
	else if (elevatorOne->getElevatorStatus() == STOP && 7 != Level)
	{
		elevatorOne->addRequest(Level, 7);
		int temp = (7 - Level) > 0 ? UP : DOWN;
		elevatorOne->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonleft8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorOne->getElevatorCurrentLevel();
	if (elevatorOne->getElevatorStatus() == UP && 8 > Level)
	{
		elevatorOne->addRequest(Level, 8);
	}
	else if (elevatorOne->getElevatorStatus() == DOWN && 8 < Level)
	{
		elevatorOne->addRequest(Level, 8);
	}
	else if (elevatorOne->getElevatorStatus() == STOP && 8 != Level)
	{
		elevatorOne->addRequest(Level, 8);
		int temp = (8 - Level) > 0 ? UP : DOWN;
		elevatorOne->setElevatorStatus(temp);
	}
}
#pragma endregion

#pragma region �Ҳ���ݵ��ѡ������¥��

void CElevatorDispatchingDlg::OnBnClickedButtonright0()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorTwo->getElevatorCurrentLevel();
	if (elevatorTwo->getElevatorStatus() == UP && 0 > Level)
	{
		elevatorTwo->addRequest(Level, 0);
	}
	else if (elevatorTwo->getElevatorStatus() == DOWN && 0 < Level)
	{
		elevatorTwo->addRequest(Level, 0);
	}
	else if (elevatorTwo->getElevatorStatus() == STOP && 0 != Level)
	{
		elevatorTwo->addRequest(Level, 0);
		int temp = (0 - Level) > 0 ? UP : DOWN;
		elevatorTwo->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonright1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorTwo->getElevatorCurrentLevel();
	if (elevatorTwo->getElevatorStatus() == UP && 1 > Level)
	{
		elevatorTwo->addRequest(Level, 1);
	}
	else if (elevatorTwo->getElevatorStatus() == DOWN && 1 < Level)
	{
		elevatorTwo->addRequest(Level, 1);
	}
	else if (elevatorTwo->getElevatorStatus() == STOP && 1 != Level)
	{
		elevatorTwo->addRequest(Level, 1);
		int temp = (1 - Level) > 0 ? UP : DOWN;
		elevatorTwo->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonright2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorTwo->getElevatorCurrentLevel();
	if (elevatorTwo->getElevatorStatus() == UP && 2 > Level)
	{
		elevatorTwo->addRequest(Level, 2);
	}
	else if (elevatorTwo->getElevatorStatus() == DOWN && 2 < Level)
	{
		elevatorTwo->addRequest(Level, 2);
	}
	else if (elevatorTwo->getElevatorStatus() == STOP && 2 != Level)
	{
		elevatorTwo->addRequest(Level, 2);
		int temp = (2 - Level) > 0 ? UP : DOWN;
		elevatorTwo->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonright3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorTwo->getElevatorCurrentLevel();
	if (elevatorTwo->getElevatorStatus() == UP && 3 > Level)
	{
		elevatorTwo->addRequest(Level, 3);
	}
	else if (elevatorTwo->getElevatorStatus() == DOWN && 3 < Level)
	{
		elevatorTwo->addRequest(Level, 3);
	}
	else if (elevatorTwo->getElevatorStatus() == STOP && 3 != Level)
	{
		elevatorTwo->addRequest(Level, 3);
		int temp = (3 - Level) > 0 ? UP : DOWN;
		elevatorTwo->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonright4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorTwo->getElevatorCurrentLevel();
	if (elevatorTwo->getElevatorStatus() == UP && 4 > Level)
	{
		elevatorTwo->addRequest(Level, 4);
	}
	else if (elevatorTwo->getElevatorStatus() == DOWN && 4 < Level)
	{
		elevatorTwo->addRequest(Level, 4);
	}
	else if (elevatorTwo->getElevatorStatus() == STOP && 4 != Level)
	{
		elevatorTwo->addRequest(Level, 4);
		int temp = (4 - Level) > 0 ? UP : DOWN;
		elevatorTwo->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonright5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorTwo->getElevatorCurrentLevel();
	if (elevatorTwo->getElevatorStatus() == UP && 5 > Level)
	{
		elevatorTwo->addRequest(Level, 5);
	}
	else if (elevatorTwo->getElevatorStatus() == DOWN && 5 < Level)
	{
		elevatorTwo->addRequest(Level, 5);
	}
	else if (elevatorTwo->getElevatorStatus() == STOP && 5 != Level)
	{
		elevatorTwo->addRequest(Level, 5);
		int temp = (5 - Level) > 0 ? UP : DOWN;
		elevatorTwo->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonright6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorTwo->getElevatorCurrentLevel();
	if (elevatorTwo->getElevatorStatus() == UP && 6 > Level)
	{
		elevatorTwo->addRequest(Level, 6);
	}
	else if (elevatorTwo->getElevatorStatus() == DOWN && 6 < Level)
	{
		elevatorTwo->addRequest(Level, 6);
	}
	else if (elevatorTwo->getElevatorStatus() == STOP && 6 != Level)
	{
		elevatorTwo->addRequest(Level, 6);
		int temp = (6 - Level) > 0 ? UP : DOWN;
		elevatorTwo->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonright7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorTwo->getElevatorCurrentLevel();
	if (elevatorTwo->getElevatorStatus() == UP && 7 > Level)
	{
		elevatorTwo->addRequest(Level, 7);
	}
	else if (elevatorTwo->getElevatorStatus() == DOWN && 7 < Level)
	{
		elevatorTwo->addRequest(Level, 7);
	}
	else if (elevatorTwo->getElevatorStatus() == STOP && 7 != Level)
	{
		elevatorTwo->addRequest(Level, 7);
		int temp = (7 - Level) > 0 ? UP : DOWN;
		elevatorTwo->setElevatorStatus(temp);
	}
}


void CElevatorDispatchingDlg::OnBnClickedButtonright8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int Level = elevatorTwo->getElevatorCurrentLevel();
	if (elevatorTwo->getElevatorStatus() == UP && 8 > Level)
	{
		elevatorTwo->addRequest(Level, 8);
	}
	else if (elevatorTwo->getElevatorStatus() == DOWN && 8 < Level)
	{
		elevatorTwo->addRequest(Level, 8);
	}
	else if (elevatorTwo->getElevatorStatus() == STOP && 8 != Level)
	{
		elevatorTwo->addRequest(Level, 8);
		int temp = (8 - Level) > 0 ? UP : DOWN;
		elevatorTwo->setElevatorStatus(temp);
	}
}
#pragma endregion

//������������ĵ����Ƿ���ʾ���Դﵽ��̬����Ч��
//WhichOne��������һ�����ݣ�����Ϊ"Left"��"Right"
//floor����������¥��
//ifShowȡֵΪ1��0��Ϊ1ʱ��ʾ��¥����ݣ�Ϊ0ʱ����
void CElevatorDispatchingDlg::Control(string WhichOne, int floor, int ifShow)
{
	switch (floor)
	{
	case 0:
		if (ifShow)
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left0);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right0);
			}
			edit->ShowWindow(TRUE);
			Sleep(800);
		}
		else
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left0);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right0);
			}
			edit->ShowWindow(FALSE);
		}
		break;
	case 1:
		if (ifShow)
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left1);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right1);
			}
			edit->ShowWindow(TRUE);
			Sleep(800);
		}
		else
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left1);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right1);
			}
			edit->ShowWindow(FALSE);
		}
		break;
	case 2:
		if (ifShow)
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left2);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right2);
			}
			edit->ShowWindow(TRUE);
			Sleep(800);
		}
		else
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left2);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right2);
			}
			edit->ShowWindow(FALSE);
		}
		break;
	case 3:
		if (ifShow)
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left3);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right3);
			}
			edit->ShowWindow(TRUE);
			Sleep(800);
		}
		else
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left3);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right3);
			}
			edit->ShowWindow(FALSE);
		}
		break;
	case 4:
		if (ifShow)
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left4);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right4);
			}
			edit->ShowWindow(TRUE);
			Sleep(800);
		}
		else
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left4);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right4);
			}
			edit->ShowWindow(FALSE);
		}
		break;
	case 5:
		if (ifShow)
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left5);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right5);
			}
			edit->ShowWindow(TRUE);
			Sleep(800);
		}
		else
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left5);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right5);
			}
			edit->ShowWindow(FALSE);
		}
		break;
	case 6:
		if (ifShow)
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left6);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right6);
			}
			edit->ShowWindow(TRUE);
			Sleep(800);
		}
		else
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left6);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right6);
			}
			edit->ShowWindow(FALSE);
		}
		break;
	case 7:
		if (ifShow)
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left7);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right7);
			}
			edit->ShowWindow(TRUE);
			Sleep(800);
		}
		else
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left7);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right7);
			}
			edit->ShowWindow(FALSE);
		}
		break;
	case 8:
		if (ifShow)
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left8);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right8);
			}
			edit->ShowWindow(TRUE);
			Sleep(800);
		}
		else
		{
			CEdit *edit = NULL;
			if (WhichOne == "Left") {
				edit = (CEdit*)GetDlgItem(Left8);
			}
			else
			{
				edit = (CEdit*)GetDlgItem(Right8);
			}
			edit->ShowWindow(FALSE);
		}
		break;
	default:
		break;
	}

}

//�жϵ���ͣ����һ��
//WhichOneָ����ѯ������һ�����ݣ�����Ϊ"Left"��"Right"
int CElevatorDispatchingDlg::Judge(string WhichOne)
{
	int floor = NULL;
	if (WhichOne == "Left")
	{
		CEdit *edit0 = (CEdit*)GetDlgItem(Left0);
		if (edit0->IsWindowVisible()) {
			floor = 0;
			return floor;
		}
		CEdit *edit1 = (CEdit*)GetDlgItem(Left1);
		if (edit1->IsWindowVisible()) {
			floor = 1;
			return floor;
		}
		CEdit *edit2 = (CEdit*)GetDlgItem(Left2);
		if (edit2->IsWindowVisible()) {
			floor = 2;
			return floor;
		}
		CEdit *edit3 = (CEdit*)GetDlgItem(Left3);
		if (edit3->IsWindowVisible()) {
			floor = 3;
			return floor;
		}
		CEdit *edit4 = (CEdit*)GetDlgItem(Left4);
		if (edit4->IsWindowVisible()) {
			floor = 4;
			return floor;
		}
		CEdit *edit5 = (CEdit*)GetDlgItem(Left5);
		if (edit5->IsWindowVisible()) {
			floor = 5;
			return floor;
		}
		CEdit *edit6 = (CEdit*)GetDlgItem(Left6);
		if (edit6->IsWindowVisible()) {
			floor = 6;
			return floor;
		}
		CEdit *edit7 = (CEdit*)GetDlgItem(Left7);
		if (edit7->IsWindowVisible()) {
			floor = 7;
			return floor;
		}
		CEdit *edit8 = (CEdit*)GetDlgItem(Left8);
		if (edit8->IsWindowVisible()) {
			floor = 8;
			return floor;
		}
	}
	else if(WhichOne == "Right")
	{
		CEdit *edit0 = (CEdit*)GetDlgItem(Right0);
		if (edit0->IsWindowVisible()) {
			floor = 0;
			return floor;
		}
		CEdit *edit1 = (CEdit*)GetDlgItem(Right1);
		if (edit1->IsWindowVisible()) {
			floor = 1;
			return floor;
		}
		CEdit *edit2 = (CEdit*)GetDlgItem(Right2);
		if (edit2->IsWindowVisible()) {
			floor = 2;
			return floor;
		}
		CEdit *edit3 = (CEdit*)GetDlgItem(Right3);
		if (edit3->IsWindowVisible()) {
			floor = 3;
			return floor;
		}
		CEdit *edit4 = (CEdit*)GetDlgItem(Right4);
		if (edit4->IsWindowVisible()) {
			floor = 4;
			return floor;
		}
		CEdit *edit5 = (CEdit*)GetDlgItem(Right5);
		if (edit5->IsWindowVisible()) {
			floor = 5;
			return floor;
		}
		CEdit *edit6 = (CEdit*)GetDlgItem(Right6);
		if (edit6->IsWindowVisible()) {
			floor = 6;
			return floor;
		}
		CEdit *edit7 = (CEdit*)GetDlgItem(Right7);
		if (edit7->IsWindowVisible()) {
			floor = 7;
			return floor;
		}
		CEdit *edit8 = (CEdit*)GetDlgItem(Right8);
		if (edit8->IsWindowVisible()) {
			floor = 8;
			return floor;
		}
	}
	return floor;
	
}

//ѡ�����ŵ���Ӧ����
void CElevatorDispatchingDlg::elevatorSelec()
{
	while (1) {
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
		while (!allRequest.empty())
		{
			strategeChooseElevator();
		}
	}
}
void CElevatorDispatchingDlg::strategeChooseElevator()
{
	typedef struct choice
	{
		Elevator *elevator;
		int sta;
		int rank;              //��Ӧ�ȼ�Ȩ�أ�ѡ��С�ĵ��ݽ�����Ӧ
	} slec;
	slec elevatorOneMeg = { elevatorOne,elevatorOne->getElevatorStatus(),1000 };
	slec elevatorTwoMeg = { elevatorTwo,elevatorTwo->getElevatorStatus(),1000 };

	elevatorOne->locker.lock();
	elevatorTwo->locker.lock();
	int num = allRequest.size();
	for (vector<Request *>::iterator i = allRequest.begin(); i < allRequest.end(); i++)
	{
		elevatorOneMeg.rank = 1000;
		elevatorTwoMeg.rank = 1000;
		int flag = JudgeUpOrDown((*i)->srclevel, (*i)->detlevel);
		//��1�ŵ��ݵ�Ȩ�ؽ����ж�
		if (elevatorOneMeg.sta == flag)
		{
			if (!elevatorOne->ArriveList.empty())
			{
				if (flag == UP && elevatorOne->getElevatorCurrentLevel() <= (*i)->srclevel)
				{
					elevatorOneMeg.rank = abs((*i)->srclevel - elevatorOne->getElevatorCurrentLevel());
				}
				else if (DOWN == flag && elevatorOne->getElevatorCurrentLevel() >= (*i)->detlevel) {
					elevatorOneMeg.rank = abs(elevatorOne->getElevatorCurrentLevel() - (*i)->srclevel);
				}
			}
		}
		else if (elevatorOneMeg.sta == STOP) {
			elevatorOneMeg.rank = abs(elevatorOne->getElevatorCurrentLevel() - (*i)->srclevel);
		}

		//��2�ŵ��ݵ�״̬�����ж�
		if (elevatorTwoMeg.sta == flag)
		{
			if (!elevatorTwo->ArriveList.empty())
			{
				if (flag == UP && elevatorTwo->getElevatorCurrentLevel() <= (*i)->srclevel)
				{
					elevatorTwoMeg.rank = abs((*i)->srclevel - elevatorTwo->getElevatorCurrentLevel());
				}
				else if (DOWN == flag && elevatorTwo->getElevatorCurrentLevel() >= (*i)->detlevel) {
					elevatorTwoMeg.rank = abs(elevatorTwo->getElevatorCurrentLevel() - (*i)->srclevel);
				}
			}
		}
		else if (elevatorTwoMeg.sta == STOP) {
			elevatorTwoMeg.rank = abs(elevatorTwo->getElevatorCurrentLevel() - (*i)->srclevel);
		}

		//û���ʺϵĵ��ݣ��������û���������һ�μ������
		if (elevatorOneMeg.rank == 1000 && elevatorTwoMeg.rank == 1000)
		{
			continue;
		}
		//ѡ����ʵĵ��ݽ���client��Ϣ�����
		if (elevatorOneMeg.rank <= elevatorTwoMeg.rank)
		{
			elevatorOneMeg.elevator->addRequest((*i)->srclevel, (*i)->detlevel);
			if (elevatorOne->getElevatorStatus() == STOP) {
				int temp = ((*i)->detlevel - elevatorOne->getElevatorCurrentLevel()) > 0 ? UP : DOWN;
				elevatorOne->setElevatorStatus(temp);
			}
		}
		else if (elevatorOneMeg.rank > elevatorTwoMeg.rank)
		{
			elevatorTwoMeg.elevator->addRequest((*i)->srclevel, (*i)->detlevel);
			if (elevatorTwo->getElevatorStatus() == STOP) {
				int temp = ((*i)->detlevel - elevatorTwo->getElevatorCurrentLevel()) > 0 ? UP : DOWN;
				elevatorTwo->setElevatorStatus(temp);
			}
		}
		delete((*i));
		i = allRequest.erase(i);
		num--;
		if (num == 0) break;
	}
	elevatorOne->locker.unlock();
	elevatorTwo->locker.unlock();
}
//�ж�client��UP����DOWN
int CElevatorDispatchingDlg::JudgeUpOrDown(int src, int det)
{
	int flag = NULL;
	if (det - src > 0) {
		flag = UP;
	}
	else if (det - src < 0) {
		flag = DOWN;
	}
	return flag;
}
