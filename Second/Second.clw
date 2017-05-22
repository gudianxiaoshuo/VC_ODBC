; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CSecondView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Second.h"
LastPage=0

ClassCount=7
Class1=CSecondApp
Class2=CSecondDoc
Class3=CSecondView
Class4=CMainFrame
Class6=CAboutDlg

ResourceCount=4
Resource1=IDR_MAINFRAME
Resource2=IDD_ABOUTBOX
Class5=CSecondSet
Resource3=IDD_SECOND_FORM
Class7=CStudentDlg
Resource4=IDD_DIALOG1

[CLS:CSecondApp]
Type=0
HeaderFile=Second.h
ImplementationFile=Second.cpp
Filter=N

[CLS:CSecondDoc]
Type=0
HeaderFile=SecondDoc.h
ImplementationFile=SecondDoc.cpp
Filter=N

[CLS:CSecondView]
Type=0
HeaderFile=SecondView.h
ImplementationFile=SecondView.cpp
Filter=D
BaseClass=CRecordView
VirtualFilter=RVWC
LastObject=CSecondView


[CLS:CSecondSet]
Type=0
HeaderFile=SecondSet.h
ImplementationFile=SecondSet.cpp
Filter=N

[DB:CSecondSet]
DB=1
DBType=ODBC
ColumnCount=5
Column1=[ID], 4, 4
Column2=[stuid], 12, 12
Column3=[name], 12, 16
Column4=[sex], 12, 4
Column5=[profcode], 12, 12


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=Second.cpp
ImplementationFile=Second.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_RECORD_FIRST
Command15=ID_RECORD_PREV
Command16=ID_RECORD_NEXT
Command17=ID_RECORD_LAST
Command18=ID_VIEW_TOOLBAR
Command19=ID_VIEW_STATUS_BAR
Command20=ID_APP_ABOUT
CommandCount=20

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[DLG:IDD_SECOND_FORM]
Type=1
Class=CSecondView
ControlCount=14
Control1=IDC_STU_ID,edit,1350631552
Control2=IDC_STU_NAME,edit,1350631552
Control3=IDC_STU_SEX,edit,1350631552
Control4=IDC_PROF_CODE,edit,1350631552
Control5=IDC_STATIC,button,1342177287
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_BUTTON1,button,1342242816
Control11=IDC_BUTTON2,button,1342242816
Control12=IDC_BUTTON3,button,1342242816
Control13=IDC_BUTTON4,button,1342242816
Control14=IDC_EDIT_QUERY,edit,1350631552

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_RECORD_FIRST
Command9=ID_RECORD_PREV
Command10=ID_RECORD_NEXT
Command11=ID_RECORD_LAST
Command12=ID_APP_ABOUT
CommandCount=12

[DLG:IDD_DIALOG1]
Type=1
Class=CStudentDlg
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STU_ID,edit,1350631552
Control8=IDC_STU_NAME,edit,1350631552
Control9=IDC_STU_SEX,edit,1350631552
Control10=IDC_STU_PROFCODE,edit,1350631552

[CLS:CStudentDlg]
Type=0
HeaderFile=StudentDlg.h
ImplementationFile=StudentDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_STU_ID

