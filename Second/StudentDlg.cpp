// StudentDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Second.h"
#include "StudentDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStudentDlg dialog


CStudentDlg::CStudentDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CStudentDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CStudentDlg)
	m_StuID = _T("");
	m_StuName = _T("");
	m_ProfCode = _T("");
	m_StuSex = _T("");
	//}}AFX_DATA_INIT
}


void CStudentDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CStudentDlg)
	DDX_Text(pDX, IDC_STU_ID, m_StuID);
	DDX_Text(pDX, IDC_STU_NAME, m_StuName);
	DDX_Text(pDX, IDC_STU_PROFCODE, m_ProfCode);
	DDX_Text(pDX, IDC_STU_SEX, m_StuSex);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CStudentDlg, CDialog)
	//{{AFX_MSG_MAP(CStudentDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStudentDlg message handlers
