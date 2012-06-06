// SButton.cpp : implementation file
//

#include "stdafx.h"
#include "ListButtonMFC.h"
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
	m_nButtonType=SHOW_DIALOG_TYPE;
	m_strButtonText="";
}

SButton::SButton(int type,CString text){
	switch(type){
	case 0:
		m_nButtonType=SHOW_DIALOG_TYPE;
		break;
	case 1:
		m_nButtonType=CLOSE_TYPE;
		break;
	case 2:
		m_nButtonType=CHANGE_TEXT_TYPE;
		break;
	default:
		break;
	}
	m_strButtonText=text;
}

SButton::~SButton()
{
}


BEGIN_MESSAGE_MAP(SButton, CButton)
	//{{AFX_MSG_MAP(SButton)
	ON_CONTROL_REFLECT(BN_CLICKED, OnClicked)
	ON_WM_ERASEBKGND()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// SButton message handlers

void SButton::OnClicked() 
{
	// TODO: Add your control notification handler code heres
	switch(m_nButtonType){
	case SHOW_DIALOG_TYPE:
		dialog=new CDialog;
		dialog->Create(IDD_DIALOG1);
		dialog->SetWindowText(m_strButtonText+_T(" shows"));
		dialog->ShowWindow(SW_SHOW);
		break;
	case CLOSE_TYPE:
		this->ShowWindow(SW_HIDE);
		break;
	case CHANGE_TEXT_TYPE:
		m_strButtonText="text is changed";
		this->SetWindowText(m_strButtonText);
		this->ShowWindow(SW_SHOW);
		break;
	default:
		break;
	}
	GetParent()->GetParent()->Invalidate(TRUE);

	/*
	ShowWindow(SW_HIDE);
	GetParent()->GetParent()->Invalidate(TRUE);
	*/
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
	UINT nState = lpDrawItemStruct->itemState;
	cdc->FillSolidRect(0,0,rect.right,rect.bottom,RGB(0,255,0));
	
	CPen pen;
	pen.CreatePen(PS_SOLID,1,RGB(0,0,0));
	cdc->SelectObject(pen);
	CBrush brush(RGB(0,255,0));
	cdc->SelectObject(brush);
	cdc->Rectangle(rect);
	//delete cdc;
	cdc->SetBkColor(RGB(0,255,0));
	// Draw the button text using the text color red.
	COLORREF crOldColor = ::SetTextColor(lpDrawItemStruct->hDC, RGB(255,0,0));
	::DrawText(lpDrawItemStruct->hDC, strText, strText.GetLength(), 
		&lpDrawItemStruct->rcItem, DT_SINGLELINE|DT_VCENTER|DT_CENTER);
	::SetTextColor(lpDrawItemStruct->hDC, crOldColor);
	//GetParent()->GetParent()->Invalidate(TRUE);
}

BOOL SButton::OnEraseBkgnd(CDC* pDC) 
{
	// TODO: Add your message handler code here and/or call default
	
	return CButton::OnEraseBkgnd(pDC);
}
