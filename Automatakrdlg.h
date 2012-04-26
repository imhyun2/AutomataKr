// automataKrDlg.h : 헤더 파일
//

#pragma once
#include "afxwin.h"
#include "src/AutomataKR.h"


// CautomataKrDlg 대화 상자
class CautomataKrDlg : public CDialog
{
// 생성입니다.
public:
	CautomataKrDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
	enum { IDD = IDD_AUTOMATAKR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:

	afx_msg void OnBnClickedBtn01();
	afx_msg void OnBnClickedBtn02();
	afx_msg void OnBnClickedBtn03();
	afx_msg void OnBnClickedBtn04();
	afx_msg void OnBnClickedBtn05();
	afx_msg void OnBnClickedBtn06();
	afx_msg void OnBnClickedBtn07();
	afx_msg void OnBnClickedBtn08();
	afx_msg void OnBnClickedBtn09();
	afx_msg void OnBnClickedBtn10();
	afx_msg void OnBnClickedBtn11();
	afx_msg void OnBnClickedBtn12();
	afx_msg void OnBnClickedBtn13();
	afx_msg void OnBnClickedBtn14();
	afx_msg void OnBnClickedBtn15();

	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();

private:
	void	Clear();					// 초기화
	void	AppendText( int nCode );	// 문자추가

private:
	CAutomataKR m_automataKr;	// Automata
};
