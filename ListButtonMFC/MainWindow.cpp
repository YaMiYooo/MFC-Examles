// MainWindow.cpp : implementation file
//

#include "stdafx.h"
#include "ListButtonMFC.h"
#include "MainWindow.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// MainWindow

MainWindow::MainWindow()
{
	
}

MainWindow::~MainWindow()
{
}


BEGIN_MESSAGE_MAP(MainWindow, CWnd)
	//{{AFX_MSG_MAP(MainWindow)
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

int MainWindow::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	
	int x,y;
	int b;
	x=10;
	y=25;
	srand(int(time(NULL)));
	for(int i=0;i<BUTTON_NUMBER;++i){
		int n=rand()%3;
		CString a;
		a.Format("%d",i+1);
		buttons[i]=new SButton(n,a);
		b=buttons[i]->Create(_T("button"),WS_CHILD|WS_VISIBLE|BS_DEFPUSHBUTTON|BS_OWNERDRAW,CRect(x,y,x+70,y+30),this,(LONG)&buttons[i]);
		
		buttons[i]->SetWindowText(a);
		if(b)
			buttons[i]->ShowWindow(SW_SHOW);
		else{
			MessageBox(_T("create button failed."));
			break;
		}
		y+=25;
	}

	CRect rect;
	CRect client;
	this->GetWindowRect(rect);
	GetParent()->GetWindowRect(client);
	m_pUpButton=new PButton(1);
	//m_pUpButton=new CButton;
	m_pUpButton->Create(_T(""),WS_CHILD|WS_VISIBLE|BS_PUSHBUTTON|BS_OWNERDRAW,CRect(0,0,rect.Width(),23),this,1);
	//m_pUpButton->BringWindowToTop();
	m_pUpButton->Invalidate(TRUE);
	m_pUpButton->ShowWindow(SW_HIDE);
	m_pDownButton=new PButton(0);
	//m_pDownButton=new CButton
	int height=rect.Height()-client.Height();
	if(height<0)
		height=rect.Height();
	else
		height=client.Height();
	m_pDownButton->Create(_T(""),WS_CHILD|WS_VISIBLE|BS_DEFPUSHBUTTON|BS_OWNERDRAW,CRect(0,height-60,rect.Width(),height-38),this,0);
	//m_pDownButton->BringWindowToTop();
	m_pDownButton->Invalidate(TRUE);
	if(rect.Height()-client.Height()<0)
		m_pDownButton->ShowWindow(SW_HIDE);

	return 0;
}

//DEL void MainWindow::OnLButtonDown(UINT nFlags, CPoint point) 
//DEL {
//DEL 	// TODO: Add your message handler code here and/or call default
//DEL 	
//DEL 	CWnd::OnLButtonDown(nFlags, point);
//DEL }

BOOL MainWindow::PreCreateWindow(CREATESTRUCT& cs) 
{
	// TODO: Add your specialized code here and/or call the base class
	m_nFrameHeight=BUTTON_NUMBER*25+100;
	//cs.style&=~WS_MAXIMIZEBOX; //禁用最大化按钮
	cs.style&=~WS_THICKFRAME; //禁止调整窗口大小
	cs.cx=100; //固定窗口宽度
	cs.cy=m_nFrameHeight; //固定窗口高度
	//ModifyStyle(WS_SIZEBOX,NULL);

	return CWnd::PreCreateWindow(cs);
}

BOOL MainWindow::OnCommand(WPARAM wParam, LPARAM lParam) 
{
	// TODO: Add your specialized code here and/or call the base class
	if(0==wParam){
		GetDlgItem(0)->ShowWindow(SW_HIDE);
		GetDlgItem(1)->ShowWindow(SW_SHOW);
		GoToBottom();
	}
	else if(1==wParam){
		GetDlgItem(0)->ShowWindow(SW_SHOW);
		GetDlgItem(1)->ShowWindow(SW_HIDE);
		GoToTop();
	}
	return CWnd::OnCommand(wParam, lParam);
}

void MainWindow::GoToTop()
{
	CRect rect;
	CRect client;
	GetParent()->GetWindowRect(client);
	this->GetWindowRect(rect);
	this->MoveWindow(0,0,rect.Width(),m_nFrameHeight);
	int height=rect.Height()-client.Height();
	if(height<0)
		height=rect.Height();
	else
		height=client.Height();
	m_pDownButton->MoveWindow(0,height-60,rect.Width(),22);
}

void MainWindow::GoToBottom()
{
	CRect rect;
	CRect client;
	GetWindowRect(rect);
	GetParent()->GetWindowRect(client);

	int height=m_nFrameHeight-client.Height();
	if(height>0)
		MoveWindow(0,-height,rect.Width(),m_nFrameHeight);
	m_pUpButton->MoveWindow(0,height-2,rect.Width(),23);
}
