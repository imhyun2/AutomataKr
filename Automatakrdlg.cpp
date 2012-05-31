// AutomataKrDlg.cpp : 구현 파일
//

#include "stdafx.h"
#include "AutomataKr.h"
#include "AutomataKrDlg.h"

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


// CAutomataKrDlg 대화 상자




CAutomataKrDlg::CAutomataKrDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAutomataKrDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

	m_auCode[0]		= 19;
	m_auCode[1]		= 20;
	m_auCode[2]		= 21;
	m_auCode[3]		= 23;
	m_auCode[4]		= 24;
	m_auCode[5]		= 25;
	m_auCode[6]		= 26;
	m_auCode[7]		= 27;
	m_auCode[8]		= 28;
	m_auCode[9]		= 29;
	m_auCode[10]	= 30;
	m_auCode[11]	= 31;
	m_auCode[12]	= 32;
	m_auCode[13]	= 33;
	m_auCode[14]	= 34;
	m_auCode[15]	= 35;
	m_auCode[16]	= 36;
	m_auCode[17]	= 37;
	m_auCode[18]	= 38;
	m_auCode[19]	= 39;
	m_auCode[20]	= 41;
	m_auCode[21]	= 42;
	m_auCode[22]	= 44;
	m_auCode[23]	= 46;
	m_auCode[24]	= 47;
	m_auCode[25]	= 48;
	m_auCode[26]	= 49;
	m_auCode[27]	= 50;
	m_auCode[28]	= 55;
	m_auCode[29]	= 56;
	m_auCode[30]	= 57;
	m_auCode[31]	= 58;
	m_auCode[32]	= 59;
	m_auCode[33]	= 60;
	m_auCode[34]	= 61;
	m_auCode[35]	= 62;
	m_auCode[36]	= 63;
	m_auCode[37]	= 65;
	m_auCode[38]	= 66;
	m_auCode[39]	= 67;
}

void CAutomataKrDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT2, m_ctlWord);
	DDX_Control(pDX, IDC_EDIT1, m_ctlText);
}

BEGIN_MESSAGE_MAP(CAutomataKrDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BTN01, &CAutomataKrDlg::OnBnClickedBtn01)
	ON_BN_CLICKED(IDC_BTN02, &CAutomataKrDlg::OnBnClickedBtn02)
	ON_BN_CLICKED(IDC_BTN03, &CAutomataKrDlg::OnBnClickedBtn03)
	ON_BN_CLICKED(IDC_BTN04, &CAutomataKrDlg::OnBnClickedBtn04)
	ON_BN_CLICKED(IDC_BTN05, &CAutomataKrDlg::OnBnClickedBtn05)
	ON_BN_CLICKED(IDC_BTN06, &CAutomataKrDlg::OnBnClickedBtn06)
	ON_BN_CLICKED(IDC_BTN07, &CAutomataKrDlg::OnBnClickedBtn07)
	ON_BN_CLICKED(IDC_BTN08, &CAutomataKrDlg::OnBnClickedBtn08)
	ON_BN_CLICKED(IDC_BTN09, &CAutomataKrDlg::OnBnClickedBtn09)
	ON_BN_CLICKED(IDC_BTN10, &CAutomataKrDlg::OnBnClickedBtn10)
	ON_BN_CLICKED(IDC_BTN11, &CAutomataKrDlg::OnBnClickedBtn11)
	ON_BN_CLICKED(IDC_BTN12, &CAutomataKrDlg::OnBnClickedBtn12)
	ON_BN_CLICKED(IDC_BTN13, &CAutomataKrDlg::OnBnClickedBtn13)
	ON_BN_CLICKED(IDC_BTN14, &CAutomataKrDlg::OnBnClickedBtn14)
	ON_BN_CLICKED(IDC_BTN15, &CAutomataKrDlg::OnBnClickedBtn15)
	ON_BN_CLICKED(IDC_BTN16, &CAutomataKrDlg::OnBnClickedBtn16)
	ON_BN_CLICKED(IDC_BTN17, &CAutomataKrDlg::OnBnClickedBtn17)
	ON_BN_CLICKED(IDC_BTN18, &CAutomataKrDlg::OnBnClickedBtn18)
	ON_BN_CLICKED(IDC_BTN19, &CAutomataKrDlg::OnBnClickedBtn19)
	ON_BN_CLICKED(IDC_BTN21, &CAutomataKrDlg::OnBnClickedBtn21)
	ON_BN_CLICKED(IDC_BTN22, &CAutomataKrDlg::OnBnClickedBtn22)
	ON_BN_CLICKED(IDC_BTN23, &CAutomataKrDlg::OnBnClickedBtn23)
	ON_BN_CLICKED(IDC_BTN24, &CAutomataKrDlg::OnBnClickedBtn24)
	ON_BN_CLICKED(IDC_BTN25, &CAutomataKrDlg::OnBnClickedBtn25)
	ON_BN_CLICKED(IDC_BTN26, &CAutomataKrDlg::OnBnClickedBtn26)
	ON_BN_CLICKED(IDC_BTN27, &CAutomataKrDlg::OnBnClickedBtn27)
	ON_BN_CLICKED(IDC_BTN28, &CAutomataKrDlg::OnBnClickedBtn28)
	ON_BN_CLICKED(IDC_BTN29, &CAutomataKrDlg::OnBnClickedBtn29)
	ON_BN_CLICKED(IDC_BTN30, &CAutomataKrDlg::OnBnClickedBtn30)
	ON_BN_CLICKED(IDC_BTN31, &CAutomataKrDlg::OnBnClickedBtn31)
	ON_BN_CLICKED(IDC_BTN32, &CAutomataKrDlg::OnBnClickedBtn32)
	ON_BN_CLICKED(IDC_BTN33, &CAutomataKrDlg::OnBnClickedBtn33)
	ON_BN_CLICKED(IDC_BTN34, &CAutomataKrDlg::OnBnClickedBtn34)
	ON_BN_CLICKED(IDC_BTN35, &CAutomataKrDlg::OnBnClickedBtn35)
	ON_BN_CLICKED(IDC_BTN36, &CAutomataKrDlg::OnBnClickedBtn36)
	ON_BN_CLICKED(IDC_BTN37, &CAutomataKrDlg::OnBnClickedBtn37)
	ON_BN_CLICKED(IDC_BTN38, &CAutomataKrDlg::OnBnClickedBtn38)
	ON_BN_CLICKED(IDC_BTN39, &CAutomataKrDlg::OnBnClickedBtn39)
	ON_BN_CLICKED(IDC_BTN40, &CAutomataKrDlg::OnBnClickedBtn40)
	ON_BN_CLICKED(IDC_BTN41, &CAutomataKrDlg::OnBnClickedBtn41)
	ON_BN_CLICKED(IDC_BTN42, &CAutomataKrDlg::OnBnClickedBtn42)
	ON_BN_CLICKED(IDC_BTN43, &CAutomataKrDlg::OnBnClickedBtn43)
	ON_BN_CLICKED(IDC_BTN44, &CAutomataKrDlg::OnBnClickedBtn44)
	ON_BN_CLICKED(IDC_BTN45, &CAutomataKrDlg::OnBnClickedBtn45)
	ON_BN_CLICKED(IDC_BTN46, &CAutomataKrDlg::OnBnClickedBtn46)
	ON_BN_CLICKED(IDC_BTN47, &CAutomataKrDlg::OnBnClickedBtn47)
	ON_BN_CLICKED(IDC_BTN48, &CAutomataKrDlg::OnBnClickedBtn48)
	ON_BN_CLICKED(IDC_BTN49, &CAutomataKrDlg::OnBnClickedBtn49)
	ON_BN_CLICKED(IDC_BTN50, &CAutomataKrDlg::OnBnClickedBtn50)
	ON_BN_CLICKED(IDC_BTN51, &CAutomataKrDlg::OnBnClickedBtn51)
	ON_BN_CLICKED(IDC_BTN52, &CAutomataKrDlg::OnBnClickedBtn52)
	ON_BN_CLICKED(IDC_BTN53, &CAutomataKrDlg::OnBnClickedBtn53)
	ON_BN_CLICKED(IDC_BTN54, &CAutomataKrDlg::OnBnClickedBtn54)
	ON_BN_CLICKED(IDC_BTN55, &CAutomataKrDlg::OnBnClickedBtn55)
	ON_BN_CLICKED(IDC_BTN56, &CAutomataKrDlg::OnBnClickedBtn56)
	ON_BN_CLICKED(IDC_BTN57, &CAutomataKrDlg::OnBnClickedBtn57)
	ON_BN_CLICKED(IDC_BTN58, &CAutomataKrDlg::OnBnClickedBtn58)
	ON_BN_CLICKED(IDC_BTN59, &CAutomataKrDlg::OnBnClickedBtn59)
	ON_BN_CLICKED(IDC_BTN60, &CAutomataKrDlg::OnBnClickedBtn60)
	ON_BN_CLICKED(IDC_BUTTON1, &CAutomataKrDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CAutomataKrDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CAutomataKrDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CAutomataKrDlg::OnBnClickedButton4)
END_MESSAGE_MAP()


// CAutomataKrDlg 메시지 처리기

BOOL CAutomataKrDlg::OnInitDialog()
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

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CAutomataKrDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CAutomataKrDlg::OnPaint()
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
HCURSOR CAutomataKrDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CAutomataKrDlg::OnBnClickedBtn01()
{
	AppendText(0);
	SetButton(0);
}

void CAutomataKrDlg::OnBnClickedBtn02()
{
	AppendText(3);
	SetButton(3);
}

void CAutomataKrDlg::OnBnClickedBtn03()
{
	AppendText(9);
	SetButton(9);
}

void CAutomataKrDlg::OnBnClickedBtn04()
{
	AppendText(11);
	SetButton(11);
}

void CAutomataKrDlg::OnBnClickedBtn05()
{
	AppendText(12);
	SetButton(12);
}

void CAutomataKrDlg::OnBnClickedBtn06()
{
	AppendText(2);
	SetButton(2);
}

void CAutomataKrDlg::OnBnClickedBtn07()
{
	AppendText(5);
	SetButton(5);
}

void CAutomataKrDlg::OnBnClickedBtn08()
{
	AppendText(6);
	SetButton(6);
}

void CAutomataKrDlg::OnBnClickedBtn09()
{
	AppendText(7);
	SetButton(7);
}

void CAutomataKrDlg::OnBnClickedBtn10()
{
	AppendText(18);
	SetButton(18);
}

void CAutomataKrDlg::OnBnClickedBtn11()
{
	AppendText(1);
	SetButton(1);
}

void CAutomataKrDlg::OnBnClickedBtn12()
{
	AppendText(4);
	SetButton(4);
}

void CAutomataKrDlg::OnBnClickedBtn13()
{
	AppendText(14);
	SetButton(14);
}

void CAutomataKrDlg::OnBnClickedBtn14()
{
	AppendText(16);
	SetButton(16);
}

void CAutomataKrDlg::OnBnClickedBtn15()
{
	AppendText(17);
	SetButton(17);
}

void CAutomataKrDlg::OnBnClickedBtn16()
{
	AppendText(8);
	SetButton(8);
}

void CAutomataKrDlg::OnBnClickedBtn17()
{
	AppendText(10);
	SetButton(10);
}

void CAutomataKrDlg::OnBnClickedBtn18()
{
	AppendText(13);
	SetButton(13);
}

void CAutomataKrDlg::OnBnClickedBtn19()
{
	AppendText(15);
	SetButton(15);
}

void CAutomataKrDlg::OnBnClickedBtn21()
{
	AppendText(m_auCode[0]);
	SetButton(m_auCode[0]);
}

void CAutomataKrDlg::OnBnClickedBtn22()
{
	AppendText(m_auCode[1]);
	SetButton(m_auCode[1]);
}

void CAutomataKrDlg::OnBnClickedBtn23()
{
	AppendText(m_auCode[2]);
	SetButton(m_auCode[2]);
}

void CAutomataKrDlg::OnBnClickedBtn24()
{
	AppendText(m_auCode[3]);
	SetButton(m_auCode[3]);
}

void CAutomataKrDlg::OnBnClickedBtn25()
{
	AppendText(m_auCode[4]);
	SetButton(m_auCode[4]);
}

void CAutomataKrDlg::OnBnClickedBtn26()
{
	AppendText(m_auCode[5]);
	SetButton(m_auCode[5]);
}

void CAutomataKrDlg::OnBnClickedBtn27()
{
	AppendText(m_auCode[6]);
	SetButton(m_auCode[6]);
}

void CAutomataKrDlg::OnBnClickedBtn28()
{
	AppendText(m_auCode[7]);
	SetButton(m_auCode[7]);
}

void CAutomataKrDlg::OnBnClickedBtn29()
{
	AppendText(m_auCode[8]);
	SetButton(m_auCode[8]);
}

void CAutomataKrDlg::OnBnClickedBtn30()
{
	AppendText(m_auCode[9]);
	SetButton(m_auCode[9]);
}

void CAutomataKrDlg::OnBnClickedBtn31()
{
	AppendText(m_auCode[10]);
	SetButton(m_auCode[10]);
}

void CAutomataKrDlg::OnBnClickedBtn32()
{
	AppendText(m_auCode[11]);
	SetButton(m_auCode[11]);
}

void CAutomataKrDlg::OnBnClickedBtn33()
{
	AppendText(m_auCode[12]);
	SetButton(m_auCode[12]);
}

void CAutomataKrDlg::OnBnClickedBtn34()
{
	AppendText(m_auCode[13]);
	SetButton(m_auCode[13]);
}

void CAutomataKrDlg::OnBnClickedBtn35()
{
	AppendText(m_auCode[14]);
	SetButton(m_auCode[14]);
}

void CAutomataKrDlg::OnBnClickedBtn36()
{
	AppendText(m_auCode[15]);
	SetButton(m_auCode[15]);
}

void CAutomataKrDlg::OnBnClickedBtn37()
{
	AppendText(m_auCode[16]);
	SetButton(m_auCode[16]);
}

void CAutomataKrDlg::OnBnClickedBtn38()
{
	AppendText(m_auCode[17]);
	SetButton(m_auCode[17]);
}

void CAutomataKrDlg::OnBnClickedBtn39()
{
	AppendText(m_auCode[18]);
	SetButton(m_auCode[18]);
}

void CAutomataKrDlg::OnBnClickedBtn40()
{
	AppendText(m_auCode[19]);
	SetButton(m_auCode[19]);
}

void CAutomataKrDlg::OnBnClickedBtn41()
{
	AppendText(m_auCode[20]);
}

void CAutomataKrDlg::OnBnClickedBtn42()
{
	AppendText(m_auCode[21]);
}

void CAutomataKrDlg::OnBnClickedBtn43()
{
	AppendText(m_auCode[22]);
}

void CAutomataKrDlg::OnBnClickedBtn44()
{
	AppendText(m_auCode[23]);
}

void CAutomataKrDlg::OnBnClickedBtn45()
{
	AppendText(m_auCode[24]);
}

void CAutomataKrDlg::OnBnClickedBtn46()
{
	AppendText(m_auCode[25]);
}

void CAutomataKrDlg::OnBnClickedBtn47()
{
	AppendText(m_auCode[26]);
}

void CAutomataKrDlg::OnBnClickedBtn48()
{
	AppendText(m_auCode[27]);
}

void CAutomataKrDlg::OnBnClickedBtn49()
{
	AppendText(m_auCode[28]);
}

void CAutomataKrDlg::OnBnClickedBtn50()
{
	AppendText(m_auCode[29]);
}

void CAutomataKrDlg::OnBnClickedBtn51()
{
	AppendText(m_auCode[30]);
}

void CAutomataKrDlg::OnBnClickedBtn52()
{
	AppendText(m_auCode[31]);
}

void CAutomataKrDlg::OnBnClickedBtn53()
{
	AppendText(m_auCode[32]);
}

void CAutomataKrDlg::OnBnClickedBtn54()
{
	AppendText(m_auCode[33]);
}

void CAutomataKrDlg::OnBnClickedBtn55()
{
	AppendText(m_auCode[34]);
}

void CAutomataKrDlg::OnBnClickedBtn56()
{
	AppendText(m_auCode[35]);
}

void CAutomataKrDlg::OnBnClickedBtn57()
{
	AppendText(m_auCode[36]);
}

void CAutomataKrDlg::OnBnClickedBtn58()
{
	AppendText(m_auCode[37]);
}

void CAutomataKrDlg::OnBnClickedBtn59()
{
	AppendText(m_auCode[38]);
}

void CAutomataKrDlg::OnBnClickedBtn60()
{
	AppendText(m_auCode[39]);
}

void CAutomataKrDlg::OnBnClickedButton1()
{
	AppendText(-1);
}

void CAutomataKrDlg::OnBnClickedButton2()
{
	AppendText(-1);
}

void CAutomataKrDlg::OnBnClickedButton3()
{
	AppendText(-2);
}

void CAutomataKrDlg::OnBnClickedButton4()
{
	m_cAutomataKr.Reset();
	m_ctlText.SetWindowText(_T(""));
}

// User Function
/////////////////////////////////////////////////////////////
void CAutomataKrDlg::AppendText(int nCode)
{
	// 문자열 입력
	m_cAutomataKr.SetKeyCode(nCode);

	CString strText = m_cAutomataKr.GetText();

	m_ctlText.SetWindowText(strText);
}

void CAutomataKrDlg::SetButton(UINT uCode)
{
	UINT	uFreqValue = 0;
	CString	strCaption = _T("");
	int		nBtnId = 0;
	UINT	uBaseCode = 0;

	if (uCode < 19)			// 눌렀던 키가 초성일 때
	{
		nBtnId = IDC_BTN21;
		uBaseCode = 0;
	}

	else if (uCode < 40)	// 눌렀던 키가 중성일 때
	{
		nBtnId = IDC_BTN41;
		uBaseCode = 20;
	}

	for (UINT i = 0; i < 20; ++i)
	{
		uFreqValue	= GetCodeOrder(uCode, i);
		strCaption	= ConvertCode2Key(uFreqValue);

		GetDlgItem(nBtnId + i)->SetWindowText(strCaption);
		m_auCode[uBaseCode + i] = uFreqValue;
	}
}

void CAutomataKrDlg::ShowIngWord(UINT uBtnCode)
{
	CRect rctButton;

	GetDlgItem(IDC_BTN01 + )
}