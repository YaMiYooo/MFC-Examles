; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CListButtonMFCDlg
LastTemplate=CButton
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "ListButtonMFC.h"

ClassCount=5
Class1=CListButtonMFCApp
Class2=CListButtonMFCDlg

ResourceCount=3
Resource1=IDR_MAINFRAME
Class3=MainWindow
Class4=SButton
Resource2=IDD_LISTBUTTONMFC_DIALOG
Class5=PButton
Resource3=IDD_DIALOG1

[CLS:CListButtonMFCApp]
Type=0
HeaderFile=ListButtonMFC.h
ImplementationFile=ListButtonMFC.cpp
Filter=N

[CLS:CListButtonMFCDlg]
Type=0
HeaderFile=ListButtonMFCDlg.h
ImplementationFile=ListButtonMFCDlg.cpp
Filter=D
LastObject=IDOK
BaseClass=CDialog
VirtualFilter=dWC



[DLG:IDD_LISTBUTTONMFC_DIALOG]
Type=1
Class=CListButtonMFCDlg
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352

[CLS:MainWindow]
Type=0
HeaderFile=MainWindow.h
ImplementationFile=MainWindow.cpp
BaseClass=CWnd
Filter=W
VirtualFilter=WC

[CLS:SButton]
Type=0
HeaderFile=SButton.h
ImplementationFile=SButton.cpp
BaseClass=CButton
Filter=W
VirtualFilter=BWC
LastObject=IDC_BUTTON1

[DLG:IDD_DIALOG1]
Type=1
Class=?
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:PButton]
Type=0
HeaderFile=PButton.h
ImplementationFile=PButton.cpp
BaseClass=CButton
Filter=W
VirtualFilter=BWC

