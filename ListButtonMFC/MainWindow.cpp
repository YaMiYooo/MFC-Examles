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
	x=y=10;
	srand(int(time(NULL)));
	for(int i=0;i<BUTTON_NUMBER;++i){
		int n=rand()%3;
		CString a;
		a.Format("%d",i+1);
		buttons[i]=new SButton(n,a);
		b=buttons[i]->Create(_T("button"),WS_CHILD|WS_VISIBLE|BS_DEFPUSHBUTTON,CRect(x,y,x+70,y+30),this,(LONG)&buttons[i]);
		
		buttons[i]->SetWindowText(a);
		if(b)
			buttons[i]->ShowWindow(SW_SHOW);
		else{
			MessageBox(_T("create button failed."));
			break;
		}
		y+=25;
	}
	
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
	m_nFrameHeight=BUTTON_NUMBER*25+50;
	//cs.style&=~WS_MAXIMIZEBOX; //禁用最大化按钮
	cs.style&=~WS_THICKFRAME; //禁止调整窗口大小
	cs.cx=100; //固定窗口宽度
	cs.cy=m_nFrameHeight; //固定窗口高度（包括菜单栏等）
	//ModifyStyle(WS_SIZEBOX,NULL);

	return CWnd::PreCreateWindow(cs);
}
