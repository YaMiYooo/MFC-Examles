// ListButtonMFCDlg.h : header file
//

#if !defined(AFX_LISTBUTTONMFCDLG_H__C870A350_A75F_463E_90DA_FACD0446F9FC__INCLUDED_)
#define AFX_LISTBUTTONMFCDLG_H__C870A350_A75F_463E_90DA_FACD0446F9FC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CListButtonMFCDlg dialog
#include "MainWindow.h"

class CListButtonMFCDlg : public CDialog
{
// Construction
public:
	CListButtonMFCDlg(CWnd* pParent = NULL);	// standard constructor

	CWnd m_window;
	MainWindow window;

// Dialog Data
	//{{AFX_DATA(CListButtonMFCDlg)
	enum { IDD = IDD_LISTBUTTONMFC_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CListButtonMFCDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CListButtonMFCDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LISTBUTTONMFCDLG_H__C870A350_A75F_463E_90DA_FACD0446F9FC__INCLUDED_)
