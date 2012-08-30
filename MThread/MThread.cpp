// MThread.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "MThread.h"
#include "MThreadDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMThreadApp

BEGIN_MESSAGE_MAP(CMThreadApp, CWinApp)
	//{{AFX_MSG_MAP(CMThreadApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMThreadApp construction

CMThreadApp::CMThreadApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CMThreadApp object

CMThreadApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CMThreadApp initialization

BOOL CMThreadApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	CMThreadDlg dlg;
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
