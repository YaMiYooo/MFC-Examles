// MThread.h : main header file for the MTHREAD application
//

#if !defined(AFX_MTHREAD_H__0182D4C6_C2CF_4CD0_B5C6_E8111FE50E26__INCLUDED_)
#define AFX_MTHREAD_H__0182D4C6_C2CF_4CD0_B5C6_E8111FE50E26__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMThreadApp:
// See MThread.cpp for the implementation of this class
//

class CMThreadApp : public CWinApp
{
public:
	CMThreadApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMThreadApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMThreadApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MTHREAD_H__0182D4C6_C2CF_4CD0_B5C6_E8111FE50E26__INCLUDED_)
