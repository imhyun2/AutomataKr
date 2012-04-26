// automataKrDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"
#include "src/AutomataKR.h"


// CautomataKrDlg ��ȭ ����
class CautomataKrDlg : public CDialog
{
// �����Դϴ�.
public:
	CautomataKrDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_AUTOMATAKR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
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
	void	Clear();					// �ʱ�ȭ
	void	AppendText( int nCode );	// �����߰�

private:
	CAutomataKR m_automataKr;	// Automata
};
