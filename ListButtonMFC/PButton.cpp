// PButton.cpp : implementation file
//

#include "stdafx.h"
#include "ListButtonMFC.h"
#include "PButton.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// PButton

PButton::PButton()
{
	m_nType=0;
}

PButton::PButton(int type){
	m_nType=type;
}

PButton::~PButton()
{
}


BEGIN_MESSAGE_MAP(PButton, CButton)
	//{{AFX_MSG_MAP(PButton)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// PButton message handlers


void PButton::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	CRect rect;
	CBitmap bmp;
	if(m_nType)
		bmp.LoadBitmap(IDB_BITMAP1);
	else
		bmp.LoadBitmap(IDB_BITMAP2);
	BITMAP bmpinfo;
	bmp.GetBitmap(&bmpinfo);
	CDC cdc;
	cdc.CreateCompatibleDC(&dc);
	cdc.SelectObject(bmp);
	CBrush brush;
	brush.CreatePatternBrush(&bmp);

	GetClientRect(rect);
	dc.StretchBlt(0,0,rect.right,rect.bottom,&cdc,0,0,bmpinfo.bmWidth,bmpinfo.bmHeight,SRCCOPY);
	
	// Do not call CButton::OnPaint() for painting messages
}



void PButton::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct) 
{
	// TODO: Add your code to draw the specified item
}

