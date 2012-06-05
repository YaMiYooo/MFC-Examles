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
