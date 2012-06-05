// ListButtonMFC.h : main header file for the LISTBUTTONMFC application
//

#if !defined(AFX_LISTBUTTONMFC_H__4E062B1B_93B0_475A_A524_A23674901235__INCLUDED_)
#define AFX_LISTBUTTONMFC_H__4E062B1B_93B0_475A_A524_A23674901235__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CListButtonMFCApp:
// See ListButtonMFC.cpp for the implementation of this class
//

class CListButtonMFCApp : public CWinApp
{
public:
	CListButtonMFCApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CListButtonMFCApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CListButtonMFCApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LISTBUTTONMFC_H__4E062B1B_93B0_475A_A524_A23674901235__INCLUDED_)
