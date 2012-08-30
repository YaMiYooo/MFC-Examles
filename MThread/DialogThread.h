#if !defined(AFX_DIALOGTHREAD_H__E8B82B5B_2DD5_4D40_B50E_C7F744518639__INCLUDED_)
#define AFX_DIALOGTHREAD_H__E8B82B5B_2DD5_4D40_B50E_C7F744518639__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogThread.h : header file
//



/////////////////////////////////////////////////////////////////////////////
// DialogThread thread

class DialogThread : public CWinThread
{
	DECLARE_DYNCREATE(DialogThread)
//protected:
	DialogThread();           // protected constructor used by dynamic creation

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogThread)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~DialogThread();

	// Generated message map functions
	//{{AFX_MSG(DialogThread)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGTHREAD_H__E8B82B5B_2DD5_4D40_B50E_C7F744518639__INCLUDED_)
