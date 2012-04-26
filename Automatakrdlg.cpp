// automataKrDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "automataKr.h"
#include "automataKrDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ���� ���α׷� ������ ���Ǵ� CAboutDlg ��ȭ �����Դϴ�.

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

// �����Դϴ�.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CautomataKrDlg ��ȭ ����




CautomataKrDlg::CautomataKrDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CautomataKrDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CautomataKrDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CautomataKrDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BTN01, &CautomataKrDlg::OnBnClickedBtn01)
	ON_BN_CLICKED(IDC_BTN02, &CautomataKrDlg::OnBnClickedBtn02)
	ON_BN_CLICKED(IDC_BTN03, &CautomataKrDlg::OnBnClickedBtn03)
	ON_BN_CLICKED(IDC_BTN04, &CautomataKrDlg::OnBnClickedBtn04)
	ON_BN_CLICKED(IDC_BTN05, &CautomataKrDlg::OnBnClickedBtn05)
	ON_BN_CLICKED(IDC_BTN06, &CautomataKrDlg::OnBnClickedBtn06)
	ON_BN_CLICKED(IDC_BTN07, &CautomataKrDlg::OnBnClickedBtn07)
	ON_BN_CLICKED(IDC_BTN08, &CautomataKrDlg::OnBnClickedBtn08)
	ON_BN_CLICKED(IDC_BTN09, &CautomataKrDlg::OnBnClickedBtn09)
	ON_BN_CLICKED(IDC_BTN10, &CautomataKrDlg::OnBnClickedBtn10)
	ON_BN_CLICKED(IDC_BTN11, &CautomataKrDlg::OnBnClickedBtn11)
	ON_BN_CLICKED(IDC_BTN12, &CautomataKrDlg::OnBnClickedBtn12)
	ON_BN_CLICKED(IDC_BTN13, &CautomataKrDlg::OnBnClickedBtn13)
	ON_BN_CLICKED(IDC_BTN14, &CautomataKrDlg::OnBnClickedBtn14)
	ON_BN_CLICKED(IDC_BTN15, &CautomataKrDlg::OnBnClickedBtn15)
	ON_BN_CLICKED(IDC_BUTTON1, &CautomataKrDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CautomataKrDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CautomataKrDlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// CautomataKrDlg �޽��� ó����

BOOL CautomataKrDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// �ý��� �޴��� "����..." �޴� �׸��� �߰��մϴ�.

	// IDM_ABOUTBOX�� �ý��� ��� ������ �־�� �մϴ�.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// �� ��ȭ ������ �������� �����մϴ�. ���� ���α׷��� �� â�� ��ȭ ���ڰ� �ƴ� ��쿡��
	//  �����ӿ�ũ�� �� �۾��� �ڵ����� �����մϴ�.
	SetIcon(m_hIcon, TRUE);			// ū �������� �����մϴ�.
	SetIcon(m_hIcon, FALSE);		// ���� �������� �����մϴ�.

	//
	Clear();

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CautomataKrDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// ��ȭ ���ڿ� �ּ�ȭ ���߸� �߰��� ��� �������� �׸�����
//  �Ʒ� �ڵ尡 �ʿ��մϴ�. ����/�� ���� ����ϴ� MFC ���� ���α׷��� ��쿡��
//  �����ӿ�ũ���� �� �۾��� �ڵ����� �����մϴ�.

void CautomataKrDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Ŭ���̾�Ʈ �簢������ �������� ����� ����ϴ�.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �������� �׸��ϴ�.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// ����ڰ� �ּ�ȭ�� â�� ���� ���ȿ� Ŀ���� ǥ�õǵ��� �ý��ۿ���
//  �� �Լ��� ȣ���մϴ�.
HCURSOR CautomataKrDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CautomataKrDlg::OnBnClickedBtn01()
{
	AppendText(0);
}

void CautomataKrDlg::OnBnClickedBtn02()
{
	AppendText(2);
}

void CautomataKrDlg::OnBnClickedBtn03()
{
	AppendText(3);
}

void CautomataKrDlg::OnBnClickedBtn04()
{
	AppendText(5);
}

void CautomataKrDlg::OnBnClickedBtn05()
{
	AppendText(6);
}

void CautomataKrDlg::OnBnClickedBtn06()
{
	AppendText(7);
}

void CautomataKrDlg::OnBnClickedBtn07()
{
	AppendText(9);
}

void CautomataKrDlg::OnBnClickedBtn08()
{
	AppendText(11);
}

void CautomataKrDlg::OnBnClickedBtn09()
{
	AppendText(12);
}

void CautomataKrDlg::OnBnClickedBtn10()
{
	AppendText(18);
}

void CautomataKrDlg::OnBnClickedBtn11()
{
	AppendText(19);
}

void CautomataKrDlg::OnBnClickedBtn12()
{
	AppendText(23);
}

void CautomataKrDlg::OnBnClickedBtn13()
{
	AppendText(27);
}

void CautomataKrDlg::OnBnClickedBtn14()
{
	AppendText(32);
}

void CautomataKrDlg::OnBnClickedBtn15()
{
	AppendText(39);
}

void CautomataKrDlg::OnBnClickedButton1()
{
	AppendText(-1);
}

void CautomataKrDlg::OnBnClickedButton2()
{
	AppendText(-3);
}

void CautomataKrDlg::OnBnClickedButton3()
{
	Clear();
}

// User Function
/////////////////////////////////////////////////////////////
void CautomataKrDlg::Clear()
{
	m_automataKr.Clear();
	SetDlgItemText(IDC_EDIT1, _T(""));
}

void CautomataKrDlg::AppendText( int nCode )
{
	// ���ڿ� �Է�
	m_automataKr.SetKeyCode(nCode);

	CString strText = m_automataKr.completeText;

	if(m_automataKr.ingWord != NULL)
	{
		strText += m_automataKr.ingWord;
	}
	SetDlgItemText(IDC_EDIT1, strText);

	// Edit Focus ó��
	CEdit * pEdit = ((CEdit*)GetDlgItem(IDC_EDIT1));
	pEdit->SetSel(pEdit->GetWindowTextLength(),pEdit->GetWindowTextLength());
	pEdit->SetFocus();
}
