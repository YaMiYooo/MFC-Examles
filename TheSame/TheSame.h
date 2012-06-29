// TheSame.h : main header file for the THESAME application
//

#if !defined(AFX_THESAME_H__B1C6EA9C_13AE_4750_AA82_117E5E04710A__INCLUDED_)
#define AFX_THESAME_H__B1C6EA9C_13AE_4750_AA82_117E5E04710A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTheSameApp:
// See TheSame.cpp for the implementation of this class
//

class CTheSameApp : public CWinApp
{
public:
	CTheSameApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTheSameApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTheSameApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_THESAME_H__B1C6EA9C_13AE_4750_AA82_117E5E04710A__INCLUDED_)
