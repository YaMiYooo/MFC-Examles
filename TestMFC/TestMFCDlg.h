// TestMFCDlg.h : header file
//

#if !defined(AFX_TESTMFCDLG_H__F689BEB1_A212_4CF0_832B_111438C263DE__INCLUDED_)
#define AFX_TESTMFCDLG_H__F689BEB1_A212_4CF0_832B_111438C263DE__INCLUDED_

/*  Add My Custom Controls  */
#include "SButton.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTestMFCDlg dialog

class CTestMFCDlg : public CDialog
{
// Construction
public:
	CTestMFCDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTestMFCDlg)
	enum { IDD = IDD_TESTMFC_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestMFCDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTestMFCDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnButton1();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	SButton my_button;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTMFCDLG_H__F689BEB1_A212_4CF0_832B_111438C263DE__INCLUDED_)
