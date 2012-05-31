// AutomataKrDlg.h : 헤더 파일
//

#pragma once
#include "afxwin.h"
#include "src/AutomataKR.h"


// CAutomataKrDlg 대화 상자
class CAutomataKrDlg : public CDialog
{
// 생성입니다.
public:
	CAutomataKrDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

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

	// 초성
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
	afx_msg void OnBnClickedBtn16();
	afx_msg void OnBnClickedBtn17();
	afx_msg void OnBnClickedBtn18();
	afx_msg void OnBnClickedBtn19();
	// 중성
	afx_msg void OnBnClickedBtn21();
	afx_msg void OnBnClickedBtn22();
	afx_msg void OnBnClickedBtn23();
	afx_msg void OnBnClickedBtn24();
	afx_msg void OnBnClickedBtn25();
	afx_msg void OnBnClickedBtn26();
	afx_msg void OnBnClickedBtn27();
	afx_msg void OnBnClickedBtn28();
	afx_msg void OnBnClickedBtn29();
	afx_msg void OnBnClickedBtn30();
	afx_msg void OnBnClickedBtn31();
	afx_msg void OnBnClickedBtn32();
	afx_msg void OnBnClickedBtn33();
	afx_msg void OnBnClickedBtn34();
	afx_msg void OnBnClickedBtn35();
	afx_msg void OnBnClickedBtn36();
	afx_msg void OnBnClickedBtn37();
	afx_msg void OnBnClickedBtn38();
	afx_msg void OnBnClickedBtn39();
	afx_msg void OnBnClickedBtn40();
	// 종성
	afx_msg void OnBnClickedBtn41();
	afx_msg void OnBnClickedBtn42();
	afx_msg void OnBnClickedBtn43();
	afx_msg void OnBnClickedBtn44();
	afx_msg void OnBnClickedBtn45();
	afx_msg void OnBnClickedBtn46();
	afx_msg void OnBnClickedBtn47();
	afx_msg void OnBnClickedBtn48();
	afx_msg void OnBnClickedBtn49();
	afx_msg void OnBnClickedBtn50();
	afx_msg void OnBnClickedBtn51();
	afx_msg void OnBnClickedBtn52();
	afx_msg void OnBnClickedBtn53();
	afx_msg void OnBnClickedBtn54();
	afx_msg void OnBnClickedBtn55();
	afx_msg void OnBnClickedBtn56();
	afx_msg void OnBnClickedBtn57();
	afx_msg void OnBnClickedBtn58();
	afx_msg void OnBnClickedBtn59();
	afx_msg void OnBnClickedBtn60();

	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();

protected:
	CEdit	m_ctlText, m_ctlWord;

	void	AppendText(int nCode);	// 문자추가
	void	SetButton(UINT uCode);
	void	ShowIngWord(UINT uBtnCode);

	CAutomataKR m_cAutomataKr;	// Automata

	UINT m_auCode[40];
};