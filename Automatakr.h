// automataKr.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CautomataKrApp:
// �� Ŭ������ ������ ���ؼ��� automataKr.cpp�� �����Ͻʽÿ�.
//

class CautomataKrApp : public CWinApp
{
public:
	CautomataKrApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CautomataKrApp theApp;