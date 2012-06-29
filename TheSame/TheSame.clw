; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=MyDialog
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "TheSame.h"

ClassCount=3
Class1=CTheSameApp
Class2=CTheSameDlg

ResourceCount=3
Resource2=IDD_THESAME_DIALOG
Resource1=IDR_MAINFRAME
Class3=MyDialog
Resource3=IDD_DIALOG1

[CLS:CTheSameApp]
Type=0
HeaderFile=TheSame.h
ImplementationFile=TheSame.cpp
Filter=N

[CLS:CTheSameDlg]
Type=0
HeaderFile=TheSameDlg.h
ImplementationFile=TheSameDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CTheSameDlg



[DLG:IDD_THESAME_DIALOG]
Type=1
Class=CTheSameDlg
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352

[DLG:IDD_DIALOG1]
Type=1
Class=MyDialog
ControlCount=0

[CLS:MyDialog]
Type=0
HeaderFile=MyDialog.h
ImplementationFile=MyDialog.cpp
BaseClass=CDialog
Filter=D
LastObject=MyDialog
VirtualFilter=dWC

