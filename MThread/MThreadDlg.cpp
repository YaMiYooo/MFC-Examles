// MThreadDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MThread.h"
#include "MThreadDlg.h"
#include "FsckDialog.h"
#include "DialogThread.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMThreadDlg dialog

CMThreadDlg::CMThreadDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMThreadDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMThreadDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMThreadDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMThreadDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMThreadDlg, CDialog)
	//{{AFX_MSG_MAP(CMThreadDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMThreadDlg message handlers
int i;
/*
UINT showMsg(LPVOID index){
	
	FsckDialog dlg(i+1);
	dlg.DoModal();
	

	if(i==5){
		FsckDialog *window=new FsckDialog(i+1);
		window->Create(IDD_DIALOG1);
		window->ShowWindow(SW_SHOW);
	}
	return 0;
}
*/
UINT doSomething(LPVOID index){
	CMThreadDlg *dlg=(CMThreadDlg *)index;
	dlg->showMsg();
	
	return 0;
}

BOOL CMThreadDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	/*
	CWinThread *thread[2];
	int i;
	for(i=0;i<2;++i){
		thread[i]=AfxBeginThread(showMsg,(LPVOID)i,THREAD_PRIORITY_NORMAL);
	}
	*/
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMThreadDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

HCURSOR CMThreadDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMThreadDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CWinThread *thread[10];
	for(i=0;i<5;++i){
		thread[i]=AfxBeginThread(RUNTIME_CLASS(DialogThread),0);
	}
}

void CMThreadDlg::showMsg(){
	/*
	FsckDialog dlg(i);
	dlg.DoModal();
	*/
	
	FsckDialog *window=new FsckDialog;
	window->Create(IDD_DIALOG1);
	window->ShowWindow(SW_SHOW);
}