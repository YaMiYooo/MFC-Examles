// ListButtonMFCDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ListButtonMFC.h"
#include "ListButtonMFCDlg.h"
#include "MainWindow.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CListButtonMFCDlg dialog

CListButtonMFCDlg::CListButtonMFCDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CListButtonMFCDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CListButtonMFCDlg)
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CListButtonMFCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CListButtonMFCDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CListButtonMFCDlg, CDialog)
	//{{AFX_MSG_MAP(CListButtonMFCDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CListButtonMFCDlg message handlers

BOOL CListButtonMFCDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	/*
	int b;
	b = m_window.Create(NULL,_T("the long long charactors"),
				WS_VISIBLE|WS_CHILD|WS_BORDER,CRect(0,0,400,300),this,(LONG)&m_window);
	if(b)
		m_window.ShowWindow(SW_SHOW);
	else
		MessageBox(_T("creat window failed."));
	*/
	window.Create(NULL,_T("MainWIndow"),WS_VISIBLE|WS_CHILD|WS_BORDER,CRect(0,0,400,window.m_nFrameHeight),this,(LONG)&window);
	window.ShowWindow(SW_SHOW);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CListButtonMFCDlg::OnPaint() 
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
		CPaintDC dc(this);
		CRect rect;
		GetClientRect(&rect);
		dc.FillSolidRect(rect.left, rect.top, rect.Width(), rect.Height(), RGB(0,255,255));

		CDialog::OnPaint();
	}
}

HCURSOR CListButtonMFCDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CListButtonMFCDlg::OnOK() 
{
	// TODO: Add extra validation here
	
	//CDialog::OnOK();
}	

void CListButtonMFCDlg::OnButton1() 
{
	//GetDlgItem(IDC_BUTTON2)->ShowWindow(SW_HIDE);
	/*
	CRect rect;
	CRect client_rect;
	window.GetWindowRect(rect);
	this->GetWindowRect(client_rect);

	int height;
	height=rect.top-client_rect.top;

	window.MoveWindow(0,0,rect.Width(),window.m_nFrameHeight);
	GetDlgItem(IDC_BUTTON1)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON2)->ShowWindow(SW_SHOW);
	Invalidate(TRUE);
	*/
}

void CListButtonMFCDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	/*
	CRect rect,client_rect;
	window.GetWindowRect(rect);
	this->GetWindowRect(client_rect);

	int height;
	height=window.m_nFrameHeight-client_rect.Height();

	if(height>0)
		window.MoveWindow(0,-height,rect.Width(),window.m_nFrameHeight);
	Invalidate(TRUE);
	GetDlgItem(IDC_BUTTON1)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON2)->ShowWindow(SW_HIDE);
	*/

}
