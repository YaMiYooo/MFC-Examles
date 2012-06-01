// TestMFC.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "TestMFC.h"
#include "TestMFCDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestMFCApp

BEGIN_MESSAGE_MAP(CTestMFCApp, CWinApp)
	//{{AFX_MSG_MAP(CTestMFCApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestMFCApp construction

CTestMFCApp::CTestMFCApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CTestMFCApp object

CTestMFCApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CTestMFCApp initialization

BOOL CTestMFCApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization

	CTestMFCDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
