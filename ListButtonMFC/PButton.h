#if !defined(AFX_PBUTTON_H__E2AE415C_7156_4AAB_AE8E_77DA746A808F__INCLUDED_)
#define AFX_PBUTTON_H__E2AE415C_7156_4AAB_AE8E_77DA746A808F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PButton.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// PButton window

class PButton : public CButton
{
// Construction
public:
	PButton();
	PButton(int type);
	int m_nType;
// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(PButton)
	public:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~PButton();

	// Generated message map functions
protected:
	//{{AFX_MSG(PButton)
	afx_msg void OnPaint();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PBUTTON_H__E2AE415C_7156_4AAB_AE8E_77DA746A808F__INCLUDED_)
