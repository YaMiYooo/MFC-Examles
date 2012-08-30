// FsckDialog.cpp : implementation file
//

#include "stdafx.h"
#include "MThread.h"
#include "FsckDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FsckDialog dialog


FsckDialog::FsckDialog(CWnd* pParent /*=NULL*/)
	: CDialog(FsckDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(FsckDialog)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	marker=-1;
}

FsckDialog::FsckDialog(int type,CWnd *pParent):CDialog(FsckDialog::IDD,pParent){
	marker=type;
}

void FsckDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FsckDialog)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FsckDialog, CDialog)
	//{{AFX_MSG_MAP(FsckDialog)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FsckDialog message handlers

BOOL FsckDialog::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	Init();
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void FsckDialog::Init(){
	CString text;
	text.Format("%d",marker);

	SetDlgItemText(IDC_EDIT1,text);
}