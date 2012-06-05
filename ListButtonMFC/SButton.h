#if !defined(AFX_SBUTTON_H__981D8B1A_8396_4C0B_966E_6335B49B153B__INCLUDED_)
#define AFX_SBUTTON_H__981D8B1A_8396_4C0B_966E_6335B49B153B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SButton.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// SButton window
#include <CDialog.h>
enum Button_Type{ SHOW_DIALOG_TYPE,CLOSE_TYPE,CHANGE_TEXT_TYPE };
class SButton : public CButton
{
// Construction
public:
	SButton();
	SButton(int type,CString text);
	Button_Type m_nButtonType;
	CString m_strButtonText;
// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(SButton)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~SButton();

	// Generated message map functions
protected:
	//{{AFX_MSG(SButton)
	afx_msg void OnClicked();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
private:
	CDialog *dialog;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SBUTTON_H__981D8B1A_8396_4C0B_966E_6335B49B153B__INCLUDED_)
