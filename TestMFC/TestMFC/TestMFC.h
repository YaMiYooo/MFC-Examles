// TestMFC.h : main header file for the TESTMFC application
//

#if !defined(AFX_TESTMFC_H__25664E5C_9740_45DF_977E_E29A0F364384__INCLUDED_)
#define AFX_TESTMFC_H__25664E5C_9740_45DF_977E_E29A0F364384__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTestMFCApp:
// See TestMFC.cpp for the implementation of this class
//

class CTestMFCApp : public CWinApp
{
public:
	CTestMFCApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestMFCApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTestMFCApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTMFC_H__25664E5C_9740_45DF_977E_E29A0F364384__INCLUDED_)
