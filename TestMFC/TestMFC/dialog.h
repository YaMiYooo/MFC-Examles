#if !defined(AFX_DIALOG_H__5CDB29CA_D181_442E_A350_0AD189177E76__INCLUDED_)
#define AFX_DIALOG_H__5CDB29CA_D181_442E_A350_0AD189177E76__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// dialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// dialog dialog

class dialog : public CDialog
{
// Construction
public:
	dialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(dialog)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(dialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(dialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOG_H__5CDB29CA_D181_442E_A350_0AD189177E76__INCLUDED_)
