// SButton.cpp : implementation file
//

#include "stdafx.h"
#include "TestMFC.h"
#include "SButton.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// SButton

SButton::SButton()
{
	is_pressed=false;
}

SButton::~SButton()
{
}


BEGIN_MESSAGE_MAP(SButton, CButton)
	//{{AFX_MSG_MAP(SButton)
	ON_CONTROL_REFLECT(BN_CLICKED, OnClicked)
	ON_WM_ERASEBKGND()
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// SButton message handlers

void SButton::OnClicked() 
{
	// TODO: Add your control notification handler code here
	is_pressed=!is_pressed;
}

void SButton::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct) 
{
	// TODO: Add your code to draw the specified item
	UINT uStyle = DFCS_BUTTONPUSH;

	// This code only works with buttons.
	ASSERT(lpDrawItemStruct->CtlType == ODT_BUTTON);
	
	// If drawing selected, add the pushed style to DrawFrameControl.
	if (lpDrawItemStruct->itemState & ODS_SELECTED)
		uStyle |= DFCS_PUSHED;
	
	// Draw the button frame.
	::DrawFrameControl(lpDrawItemStruct->hDC, &lpDrawItemStruct->rcItem, 
		DFC_BUTTON, uStyle);
	
	// Get the button's text.
	CString strText;
	GetWindowText(strText);

	// Draw the background
	CDC *cdc=CDC::FromHandle(lpDrawItemStruct->hDC);
	CRect rect(lpDrawItemStruct->rcItem);
	if(is_pressed)
		cdc->FillSolidRect(0,0,rect.right,rect.bottom,RGB(0,255,0));
	else
		cdc->FillSolidRect(0,0,rect.right,rect.bottom,RGB(0,255,255));
	//delete cdc;
	
	// Draw the button text using the text color red.
	COLORREF crOldColor = ::SetTextColor(lpDrawItemStruct->hDC, RGB(255,0,0));
	::DrawText(lpDrawItemStruct->hDC, strText, strText.GetLength(), 
		&lpDrawItemStruct->rcItem, DT_SINGLELINE|DT_VCENTER|DT_CENTER);
	::SetTextColor(lpDrawItemStruct->hDC, crOldColor);

}

BOOL SButton::OnEraseBkgnd(CDC* pDC) 
{
	// TODO: Add your message handler code here and/or call default
	
	return TRUE;
	//return CButton::OnEraseBkgnd(pDC);
}