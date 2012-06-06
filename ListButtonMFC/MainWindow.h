#if !defined(AFX_MAINWINDOW_H__D2493AFE_5B3F_4C19_B91C_B9A17C46279B__INCLUDED_)
#define AFX_MAINWINDOW_H__D2493AFE_5B3F_4C19_B91C_B9A17C46279B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MainWindow.h : header file
//
#include "SButton.h"
#include "PButton.h"

#define BUTTON_NUMBER 20
/////////////////////////////////////////////////////////////////////////////
// MainWindow window

class MainWindow : public CWnd
{
// Construction
public:
	MainWindow();
	int m_nFrameHeight;
// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(MainWindow)
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
public:
	void GoToBottom();
	void GoToTop();
	virtual ~MainWindow();

	// Generated message map functions
protected:
	//{{AFX_MSG(MainWindow)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	SButton *buttons[BUTTON_NUMBER];
	PButton *m_pUpButton;
	PButton *m_pDownButton;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINWINDOW_H__D2493AFE_5B3F_4C19_B91C_B9A17C46279B__INCLUDED_)
