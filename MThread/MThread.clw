; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=DialogThread
LastTemplate=CWinThread
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MThread.h"

ClassCount=4
Class1=CMThreadApp
Class2=CMThreadDlg

ResourceCount=3
Resource2=IDD_MTHREAD_DIALOG
Resource1=IDR_MAINFRAME
Class3=FsckDialog
Class4=DialogThread
Resource3=IDD_DIALOG1

[CLS:CMThreadApp]
Type=0
HeaderFile=MThread.h
ImplementationFile=MThread.cpp
Filter=N

[CLS:CMThreadDlg]
Type=0
HeaderFile=MThreadDlg.h
ImplementationFile=MThreadDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CMThreadDlg



[DLG:IDD_MTHREAD_DIALOG]
Type=1
Class=CMThreadDlg
ControlCount=1
Control1=IDC_BUTTON1,button,1342242816

[DLG:IDD_DIALOG1]
Type=1
Class=FsckDialog
ControlCount=2
Control1=IDC_STATIC,static,1342308352
Control2=IDC_EDIT1,edit,1350631552

[CLS:FsckDialog]
Type=0
HeaderFile=FsckDialog.h
ImplementationFile=FsckDialog.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT1
VirtualFilter=dWC

[CLS:DialogThread]
Type=0
HeaderFile=DialogThread.h
ImplementationFile=DialogThread.cpp
BaseClass=CWinThread
Filter=N

