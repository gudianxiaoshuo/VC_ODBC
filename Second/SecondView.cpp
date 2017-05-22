// SecondView.cpp : implementation of the CSecondView class
//

#include "stdafx.h"
#include "Second.h"

#include "SecondSet.h"
#include "SecondDoc.h"
#include "SecondView.h"

#include "MainFrm.h"

#include "StudentDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSecondView

IMPLEMENT_DYNCREATE(CSecondView, CRecordView)

BEGIN_MESSAGE_MAP(CSecondView, CRecordView)
//{{AFX_MSG_MAP(CSecondView)
ON_BN_CLICKED(IDC_BUTTON1, OnAddRecord)
ON_BN_CLICKED(IDC_BUTTON2, OnModify)
ON_BN_CLICKED(IDC_BUTTON3, OnDelRec)
ON_BN_CLICKED(IDC_BUTTON4, OnQuery)
//}}AFX_MSG_MAP
// Standard printing commands
ON_COMMAND(ID_FILE_PRINT, CRecordView::OnFilePrint)
ON_COMMAND(ID_FILE_PRINT_DIRECT, CRecordView::OnFilePrint)
ON_COMMAND(ID_FILE_PRINT_PREVIEW, CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSecondView construction/destruction

CSecondView::CSecondView()
: CRecordView(CSecondView::IDD)
{
	//{{AFX_DATA_INIT(CSecondView)
	m_pSet = NULL;
	m_strQuery = _T("");
	//}}AFX_DATA_INIT
	// TODO: add construction code here
	
}

CSecondView::~CSecondView()
{
}

void CSecondView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSecondView)
	DDX_FieldText(pDX, IDC_PROF_CODE, m_pSet->m_profcode, m_pSet);
	DDX_FieldText(pDX, IDC_STU_ID, m_pSet->m_stuid, m_pSet);
	DDX_FieldText(pDX, IDC_STU_NAME, m_pSet->m_name, m_pSet);
	DDX_FieldText(pDX, IDC_STU_SEX, m_pSet->m_sex, m_pSet);
	DDX_Text(pDX, IDC_EDIT_QUERY, m_strQuery);
	//}}AFX_DATA_MAP
}

BOOL CSecondView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
	
	return CRecordView::PreCreateWindow(cs);
}

void CSecondView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_secondSet;
	CRecordView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();
	
	
	
	
	while(!m_pSet->IsEOF())
	{
		
		m_pSet->MoveNext();
		m_pSet->GetRecordCount();
	}
	
	m_pSet->MoveFirst();
	
}

/////////////////////////////////////////////////////////////////////////////
// CSecondView printing

BOOL CSecondView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSecondView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSecondView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CSecondView diagnostics

#ifdef _DEBUG
void CSecondView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CSecondView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CSecondDoc* CSecondView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSecondDoc)));
	return (CSecondDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSecondView database support
CRecordset* CSecondView::OnGetRecordset()
{
	return m_pSet;
}


/////////////////////////////////////////////////////////////////////////////
// CSecondView message handlers

BOOL CSecondView::OnCommand(WPARAM wParam, LPARAM lParam) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	
	
	CMainFrame *pFrame=(CMainFrame*)AfxGetApp()->m_pMainWnd;
	
	CStatusBar *pStatus=&pFrame->m_wndStatusBar;
	
	if(pStatus)
	{
		
		
		// pStatus->SetPaneText(2,"第0个状态栏窗口");
		
		
		CRecordsetStatus rStatus;
		m_pSet->GetStatus(rStatus);
		
		CString str;
		str.Format("当前记录:%d /总记录：%d",1+rStatus.m_lCurrentRecord,m_pSet->GetRecordCount());
		
		pStatus->SetPaneText(1,str);
	}
	
	
	return CRecordView::OnCommand(wParam, lParam);
}

void CSecondView::OnAddRecord() 
{
	// TODO: Add your control notification handler code here
	
    CStudentDlg dlg;
	
	dlg.m_StuID=m_pSet->m_stuid;
	dlg.m_StuName=m_pSet->m_name;
	dlg.m_StuSex=m_pSet->m_sex;
	dlg.m_ProfCode= m_pSet->m_profcode;
	
	
	if(dlg.DoModal()==IDOK)
	{
		
		//在表的末尾新增一条记录
		m_pSet->AddNew();
		
		m_pSet->m_stuid=dlg.m_StuID;
		m_pSet->m_name=dlg.m_StuName;
		m_pSet->m_sex=dlg.m_StuSex;
		m_pSet->m_profcode=dlg.m_ProfCode;
		
		m_pSet->Update();
		m_pSet->Requery();//快照方式下 必须调用这句函数 重新查询刷新

	   

		//跳转到末尾 显示新增的记录
        m_pSet->MoveLast();
		UpdateData(FALSE);//更新主对话框数据为新添加的信息
	}
	
	
	
}

void CSecondView::OnModify() 
{
	// TODO: Add your control notification handler code here
	
	CStudentDlg dlg;
	
	dlg.m_StuID=m_pSet->m_stuid;
	dlg.m_StuName=m_pSet->m_name;
	dlg.m_StuSex=m_pSet->m_sex;
	dlg.m_ProfCode= m_pSet->m_profcode;
	
	
	if(dlg.DoModal()==IDOK)
	{
		
		
		m_pSet->Edit();
		
		m_pSet->m_stuid=dlg.m_StuID;
		m_pSet->m_name=dlg.m_StuName;
		m_pSet->m_sex=dlg.m_StuSex;
		m_pSet->m_profcode=dlg.m_ProfCode;
		
		m_pSet->Update();
		
		UpdateData(FALSE);
	}
	
}

void CSecondView::OnDelRec() 
{
	// TODO: Add your control notification handler code here
	
	CRecordsetStatus status;
	m_pSet->GetStatus(status);
	
	m_pSet->Delete();
	
	if(status.m_lCurrentRecord==0)
		m_pSet->MoveNext();
	else
		m_pSet->MoveFirst();
	
	UpdateData(FALSE);
	
}

void CSecondView::OnQuery() 
{
	// TODO: Add your control notification handler code here
	
	UpdateData(TRUE);
	
	m_strQuery.TrimLeft();
	
	if(m_strQuery.IsEmpty())
	{
        MessageBox("空");
		return;
	}

	if(m_pSet->IsOpen())
	{

		m_pSet->Close();

		m_pSet->m_strFilter.Format("stuid='%s'",m_strQuery);

		m_pSet->m_strSort="stuid";

        m_pSet->Open();

		if(!m_pSet->IsEOF())
			UpdateData(FALSE);
		else
			MessageBox("没有找到");

	}
	
}
