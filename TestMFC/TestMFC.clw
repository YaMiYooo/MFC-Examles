; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTestMFCDlg
LastTemplate=CButton
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "TestMFC.h"

ClassCount=4
Class1=CTestMFCApp
Class2=CTestMFCDlg

ResourceCount=4
Resource1=IDR_MAINFRAME
Class3=dialog
Resource2=IDD_TESTMFC_DIALOG
Class4=SButton
Resource3=IDD_DIALOG1
Resource4=IDR_MENU1

[CLS:CTestMFCApp]
Type=0
HeaderFile=TestMFC.h
ImplementationFile=TestMFC.cpp
Filter=N

[CLS:CTestMFCDlg]
Type=0
HeaderFile=TestMFCDlg.h
ImplementationFile=TestMFCDlg.cpp
Filter=W
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDCLOSE



[DLG:IDD_TESTMFC_DIALOG]
Type=1
Class=SButton
ControlCount=0

[DLG:IDD_DIALOG1]
Type=1
Class=dialog
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:dialog]
Type=0
HeaderFile=dialog.h
ImplementationFile=dialog.cpp
BaseClass=CDialog
Filter=D
LastObject=dialog

[CLS:SButton]
Type=0
HeaderFile=SButton.h
ImplementationFile=SButton.cpp
BaseClass=CButton
Filter=W
VirtualFilter=BWC
LastObject=AFX_ID_PREVIEW_CLOSE

[MNU:IDR_MENU1]
Type=1
Class=CTestMFCDlg
Command1=ID_MENUITEM32771
Command2=IDCLOSE
CommandCount=2

