// Second.h : main header file for the SECOND application
//

#if !defined(AFX_SECOND_H__DC8D3E75_3D0F_4450_BC9C_16A837DB929A__INCLUDED_)
#define AFX_SECOND_H__DC8D3E75_3D0F_4450_BC9C_16A837DB929A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSecondApp:
// See Second.cpp for the implementation of this class
//

class CSecondApp : public CWinApp
{
public:
	CSecondApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSecondApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSecondApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SECOND_H__DC8D3E75_3D0F_4450_BC9C_16A837DB929A__INCLUDED_)
