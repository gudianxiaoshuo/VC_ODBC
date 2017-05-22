// SecondView.h : interface of the CSecondView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SECONDVIEW_H__F7AEA7DE_4747_4CD7_A2AA_BABFBB181F89__INCLUDED_)
#define AFX_SECONDVIEW_H__F7AEA7DE_4747_4CD7_A2AA_BABFBB181F89__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CSecondSet;

class CSecondView : public CRecordView
{
protected: // create from serialization only
	CSecondView();
	DECLARE_DYNCREATE(CSecondView)

public:
	//{{AFX_DATA(CSecondView)
	enum { IDD = IDD_SECOND_FORM };
	CSecondSet* m_pSet;
	CString	m_strQuery;
	//}}AFX_DATA

// Attributes
public:
	CSecondDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSecondView)
	public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSecondView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSecondView)
	afx_msg void OnAddRecord();
	afx_msg void OnModify();
	afx_msg void OnDelRec();
	afx_msg void OnQuery();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SecondView.cpp
inline CSecondDoc* CSecondView::GetDocument()
   { return (CSecondDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SECONDVIEW_H__F7AEA7DE_4747_4CD7_A2AA_BABFBB181F89__INCLUDED_)
