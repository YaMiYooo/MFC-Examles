// MThreadDlg.h : header file
//

#if !defined(AFX_MTHREADDLG_H__EEC27299_7340_49B3_9CD0_663EC9163FFF__INCLUDED_)
#define AFX_MTHREADDLG_H__EEC27299_7340_49B3_9CD0_663EC9163FFF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMThreadDlg dialog

class CMThreadDlg : public CDialog
{
// Construction
public:
	CMThreadDlg(CWnd* pParent = NULL);	// standard constructor
	void showMsg();
// Dialog Data
	//{{AFX_DATA(CMThreadDlg)
	enum { IDD = IDD_MTHREAD_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMThreadDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMThreadDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MTHREADDLG_H__EEC27299_7340_49B3_9CD0_663EC9163FFF__INCLUDED_)
