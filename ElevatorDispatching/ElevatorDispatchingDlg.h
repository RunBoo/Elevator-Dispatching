
// ElevatorDispatchingDlg.h : ͷ�ļ�
//

#pragma once
#include <string>
#include <vector>
using namespace std;

class Elevator;
class Request;
// CElevatorDispatchingDlg �Ի���
class CElevatorDispatchingDlg : public CDialogEx
{
// ����
public:
	CElevatorDispatchingDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ELEVATORDISPATCHING_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP();
public:
	afx_msg void OnBnClickedButtonUp0();
	afx_msg void OnBnClickedButtonUp1();
	afx_msg void OnBnClickedButtonDown1();
	afx_msg void OnBnClickedButtonUp2();
	afx_msg void OnBnClickedButtonDown2();
	afx_msg void OnBnClickedButtonUp3();
	afx_msg void OnBnClickedButtonDown3();
	afx_msg void OnBnClickedButtonUp4();
	afx_msg void OnBnClickedButtonDown4();
	afx_msg void OnBnClickedButtonUp5();
	afx_msg void OnBnClickedButtonDown5();
	afx_msg void OnBnClickedButtonUp6();
	afx_msg void OnBnClickedButtonDown6();
	afx_msg void OnBnClickedButtonUp7();
	afx_msg void OnBnClickedButtonDown7();
	afx_msg void OnBnClickedButtonDown8();
	afx_msg void OnBnClickedButtonleft0();
	afx_msg void OnBnClickedButtonleft1();
	afx_msg void OnBnClickedButtonleft2();
	afx_msg void OnBnClickedButtonleft3();
	afx_msg void OnBnClickedButtonleft4();
	afx_msg void OnBnClickedButtonleft5();
	afx_msg void OnBnClickedButtonleft6();
	afx_msg void OnBnClickedButtonleft7();
	afx_msg void OnBnClickedButtonleft8();
	afx_msg void OnBnClickedButtonright0();
	afx_msg void OnBnClickedButtonright1();
	afx_msg void OnBnClickedButtonright2();
	afx_msg void OnBnClickedButtonright3();
	afx_msg void OnBnClickedButtonright4();
	afx_msg void OnBnClickedButtonright5();
	afx_msg void OnBnClickedButtonright6();
	afx_msg void OnBnClickedButtonright7();
	afx_msg void OnBnClickedButtonright8();
	void Control(string WhichOne, int floor, int ifShow);
	int Judge(string WhichOne);
	void elevatorSelec();
	vector<Request *> allRequest;
	int JudgeUpOrDown(int src, int det);
private:
	Elevator *elevatorOne;
	Elevator *elevatorTwo;
	void strategeChooseElevator();
	

};
