#if !defined(AFX_STUDENTDLG_H__55000C4C_3C2F_43DA_B3B3_34BC40FFEF93__INCLUDED_)
#define AFX_STUDENTDLG_H__55000C4C_3C2F_43DA_B3B3_34BC40FFEF93__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// StudentDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CStudentDlg dialog

class CStudentDlg : public CDialog
{
// Construction
public:
	CStudentDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CStudentDlg)
	enum { IDD = IDD_DIALOG1 };
	CString	m_StuID;
	CString	m_StuName;
	CString	m_ProfCode;
	CString	m_StuSex;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStudentDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CStudentDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUDENTDLG_H__55000C4C_3C2F_43DA_B3B3_34BC40FFEF93__INCLUDED_)
