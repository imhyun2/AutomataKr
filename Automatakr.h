// AutomataKr.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CAutomataKrApp:
// �� Ŭ������ ������ ���ؼ��� AutomataKr.cpp�� �����Ͻʽÿ�.
//

class CAutomataKrApp : public CWinApp
{
public:
	CAutomataKrApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CAutomataKrApp theApp;