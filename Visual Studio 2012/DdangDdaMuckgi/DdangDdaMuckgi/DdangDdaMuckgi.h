
// DdangDdaMuckgi.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CDdangDdaMuckgiApp:
// �� Ŭ������ ������ ���ؼ��� DdangDdaMuckgi.cpp�� �����Ͻʽÿ�.
//

class CDdangDdaMuckgiApp : public CWinApp
{
public:
	CDdangDdaMuckgiApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CDdangDdaMuckgiApp theApp;