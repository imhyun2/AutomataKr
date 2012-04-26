// automataKrDlg.cpp : 구현 파일
//

#include "stdafx.h"
#include "automataKr.h"
#include "automataKrDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
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


// CautomataKrDlg 대화 상자




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


// CautomataKrDlg 메시지 처리기

BOOL CautomataKrDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
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

	// 이 대화 상자의 아이콘을 설정합니다. 응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	//
	Clear();

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
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

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다. 문서/뷰 모델을 사용하는 MFC 응용 프로그램의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CautomataKrDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
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
	// 문자열 입력
	m_automataKr.SetKeyCode(nCode);

	CString strText = m_automataKr.completeText;

	if(m_automataKr.ingWord != NULL)
	{
		strText += m_automataKr.ingWord;
	}
	SetDlgItemText(IDC_EDIT1, strText);

	// Edit Focus 처리
	CEdit * pEdit = ((CEdit*)GetDlgItem(IDC_EDIT1));
	pEdit->SetSel(pEdit->GetWindowTextLength(),pEdit->GetWindowTextLength());
	pEdit->SetFocus();
}
