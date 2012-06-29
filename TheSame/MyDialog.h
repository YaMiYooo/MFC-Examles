#if !defined(AFX_MYDIALOG_H__02B24633_1DBD_4498_9041_A4E1FF34B27F__INCLUDED_)
#define AFX_MYDIALOG_H__02B24633_1DBD_4498_9041_A4E1FF34B27F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MyDialog.h : header file
//
#include "TheSameDlg.h"
/////////////////////////////////////////////////////////////////////////////
// MyDialog dialog

class MyDialog : public CTheSameDlg
{
// Construction
public:
	MyDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(MyDialog)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(MyDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(MyDialog)
	//afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYDIALOG_H__02B24633_1DBD_4498_9041_A4E1FF34B27F__INCLUDED_)
