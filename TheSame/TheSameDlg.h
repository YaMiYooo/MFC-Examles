// TheSameDlg.h : header file
//

#if !defined(AFX_THESAMEDLG_H__9BF133FC_9A28_4F85_B48D_C20E80B752F4__INCLUDED_)
#define AFX_THESAMEDLG_H__9BF133FC_9A28_4F85_B48D_C20E80B752F4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTheSameDlg dialog

class CTheSameDlg : public CDialog
{
// Construction
public:
	CTheSameDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTheSameDlg)
	enum { IDD = IDD_THESAME_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTheSameDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTheSameDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_THESAMEDLG_H__9BF133FC_9A28_4F85_B48D_C20E80B752F4__INCLUDED_)
