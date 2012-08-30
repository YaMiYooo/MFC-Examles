// DialogThread.cpp : implementation file
//

#include "stdafx.h"
#include "MThread.h"
#include "DialogThread.h"
#include "FsckDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogThread

IMPLEMENT_DYNCREATE(DialogThread, CWinThread)

DialogThread::DialogThread()
{
}

DialogThread::~DialogThread()
{
}

BOOL DialogThread::InitInstance()
{
	// TODO:  perform and per-thread initialization here
	FsckDialog *dlg=new FsckDialog();
	dlg->Create(IDD_DIALOG1);
	dlg->ShowWindow(SW_SHOW);
	return TRUE;
}

int DialogThread::ExitInstance()
{
	// TODO:  perform any per-thread cleanup here
	return CWinThread::ExitInstance();
}

BEGIN_MESSAGE_MAP(DialogThread, CWinThread)
	//{{AFX_MSG_MAP(DialogThread)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogThread message handlers
