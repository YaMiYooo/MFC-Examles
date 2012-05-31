#if !defined(AFX_SBUTTON_H__A62303AC_10DB_4148_A529_F764BCC0F94D__INCLUDED_)
#define AFX_SBUTTON_H__A62303AC_10DB_4148_A529_F764BCC0F94D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SButton.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// SButton window

class SButton : public CButton
{
// Construction
public:
	SButton();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(SButton)
	public:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~SButton();

	// Generated message map functions
protected:
	//{{AFX_MSG(SButton)
	afx_msg void OnClicked();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
private:
	bool is_pressed;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SBUTTON_H__A62303AC_10DB_4148_A529_F764BCC0F94D__INCLUDED_)
