// ListButtonMFC.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "ListButtonMFC.h"
#include "ListButtonMFCDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CListButtonMFCApp

BEGIN_MESSAGE_MAP(CListButtonMFCApp, CWinApp)
	//{{AFX_MSG_MAP(CListButtonMFCApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CListButtonMFCApp construction

CListButtonMFCApp::CListButtonMFCApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CListButtonMFCApp object

CListButtonMFCApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CListButtonMFCApp initialization

BOOL CListButtonMFCApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization

	CListButtonMFCDlg dlg;
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
