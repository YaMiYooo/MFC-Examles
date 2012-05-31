// TestMFCDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TestMFC.h"
#include "TestMFCDlg.h"
#include "dialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestMFCDlg dialog

CTestMFCDlg::CTestMFCDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTestMFCDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTestMFCDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTestMFCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTestMFCDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTestMFCDlg, CDialog)
	//{{AFX_MSG_MAP(CTestMFCDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_LBUTTONDBLCLK()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_WM_SIZE()
	ON_WM_CAPTURECHANGED()
	ON_WM_CANCELMODE()
	ON_WM_CHAR()
	ON_WM_ERASEBKGND()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestMFCDlg message handlers

BOOL CTestMFCDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	my_button.Create(_T("button"),WS_CHILD|WS_VISIBLE|BS_PUSHBUTTON|BS_OWNERDRAW,CRect(10,10,80,50),this,1);
	my_button.ShowWindow(SW_SHOW);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTestMFCDlg::OnPaint() 
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
	CPaintDC dc(this);
	CRect rect;
	CBitmap bmp;
	bmp.LoadBitmap(IDB_BITMAP3);
	BITMAP bmpinfo;
	bmp.GetBitmap(&bmpinfo);
	CDC cdc;
	cdc.CreateCompatibleDC(&dc);
	cdc.SelectObject(bmp);
	CBrush brush;
	brush.CreatePatternBrush(&bmp);

	GetClientRect(rect);
	dc.StretchBlt(0,0,rect.right,rect.bottom,&cdc,0,0,bmpinfo.bmWidth,bmpinfo.bmHeight,SRCCOPY);
	//dc.FillRect(CRect(0,0,rect.right/2,rect.bottom/2),&brush);
	//dc.FillSolidRect(0,0,rect.right/2,rect.bottom/2,RGB(0,0,255));
	//dc.FillSolidRect(CRect(0,0,rect.right/2,rect.bottom/2),RGB(0,0,255));
	//CDialog::OnPaint();
	/*
	CDialog::OnInitDialog(); 
	CBitmap bmp; 
	bmp.LoadBitmap(IDB_BITMAP1); 
	CBrush brush;
	brush.CreatePatternBrush(&bmp); 
	bmp.DeleteObject(); 
	*/
}

HCURSOR CTestMFCDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CTestMFCDlg::OnLButtonDblClk(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	dialog d;

	d.DoModal();
	CDialog::OnLButtonDblClk(nFlags, point);
}

void CTestMFCDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
}

void CTestMFCDlg::OnSize(UINT nType, int cx, int cy) 
{
	CDialog::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	//CRect rect;
	//GetWindowRect(rect);
	Invalidate(true);
}

BOOL CTestMFCDlg::OnEraseBkgnd(CDC* pDC) 
{
	// TODO: Add your message handler code here and/or call default

	/*
	CRect rect;
	GetClientRect(&rect);
	pDC->FillSolidRect(rect.left, rect.top, rect.Width(), rect.Height(), RGB(0,255,0));
	*/

	return TRUE;
	//return CDialog::OnEraseBkgnd(pDC);
}
