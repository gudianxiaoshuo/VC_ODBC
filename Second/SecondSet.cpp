// SecondSet.cpp : implementation of the CSecondSet class
//

#include "stdafx.h"
#include "Second.h"
#include "SecondSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSecondSet implementation

IMPLEMENT_DYNAMIC(CSecondSet, CRecordset)

CSecondSet::CSecondSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CSecondSet)
	m_ID = 0;
	m_stuid = _T("");
	m_name = _T("");
	m_sex = _T("");
	m_profcode = _T("");
	m_nFields = 5;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}

CString CSecondSet::GetDefaultConnect()
{
	return _T("ODBC;DSN=学生信息");
}

CString CSecondSet::GetDefaultSQL()
{
	return _T("[学生专业信息]");
}

void CSecondSet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CSecondSet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[stuid]"), m_stuid);
	RFX_Text(pFX, _T("[name]"), m_name);
	RFX_Text(pFX, _T("[sex]"), m_sex);
	RFX_Text(pFX, _T("[profcode]"), m_profcode);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CSecondSet diagnostics

#ifdef _DEBUG
void CSecondSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CSecondSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
