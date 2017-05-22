// SecondSet.h : interface of the CSecondSet class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SECONDSET_H__0BDF6D23_80F0_4D27_A6EE_F2CFBBB5D490__INCLUDED_)
#define AFX_SECONDSET_H__0BDF6D23_80F0_4D27_A6EE_F2CFBBB5D490__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CSecondSet : public CRecordset
{
public:
	CSecondSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CSecondSet)

// Field/Param Data
	//{{AFX_FIELD(CSecondSet, CRecordset)
	long	m_ID;
	CString	m_stuid;
	CString	m_name;
	CString	m_sex;
	CString	m_profcode;
	//}}AFX_FIELD

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSecondSet)
	public:
	virtual CString GetDefaultConnect();	// Default connection string
	virtual CString GetDefaultSQL(); 	// default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SECONDSET_H__0BDF6D23_80F0_4D27_A6EE_F2CFBBB5D490__INCLUDED_)

