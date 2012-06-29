// TheSameDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TheSame.h"
#include "TheSameDlg.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTheSameDlg dialog

CTheSameDlg::CTheSameDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTheSameDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTheSameDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTheSameDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTheSameDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTheSameDlg, CDialog)
	//{{AFX_MSG_MAP(CTheSameDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTheSameDlg message handlers

BOOL CTheSameDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTheSameDlg::OnPaint() 
{
	/*
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
	*/
	CRect rect;
	GetClientRect(rect);
	CPaintDC dc(this);
	CBrush brush(RGB(0,0,255));
	dc.FillRect(rect,&brush);

	CDialog::OnPaint();
}

HCURSOR CTheSameDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CTheSameDlg::OnOK() 
{
	// TODO: Add extra validation here
	MyDialog dialog;
	dialog.DoModal();
	//CDialog::OnOK();
}
