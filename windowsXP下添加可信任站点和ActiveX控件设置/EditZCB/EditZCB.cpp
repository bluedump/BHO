// EditZCB.cpp : 定义应用程序的类行为。
//

#include "stdafx.h"
#include "EditZCB.h"
#include "EditZCBDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEditZCBApp

BEGIN_MESSAGE_MAP(CEditZCBApp, CWinApp)
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()


// CEditZCBApp 构造

CEditZCBApp::CEditZCBApp()
{
	// TODO: 在此处添加构造代码，
	// 将所有重要的初始化放置在 InitInstance 中
}


// 唯一的一个 CEditZCBApp 对象

CEditZCBApp theApp;


// CEditZCBApp 初始化

BOOL CEditZCBApp::InitInstance()
{
	// 如果一个运行在 Windows XP 上的应用程序清单指定要
	// 使用 ComCtl32.dll 版本 6 或更高版本来启用可视化方式，
	//则需要 InitCommonControls()。否则，将无法创建窗口。
	InitCommonControls();

	CWinApp::InitInstance();

	AfxEnableControlContainer();


	CEditZCBDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO：在此放置处理何时用“确定”来关闭
		//对话框的代码
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO：在此放置处理何时用“取消”来关闭
		//对话框的代码
	}

	// 由于对话框已关闭，所以将返回 FALSE 以便退出应用程序，
	// 而不是启动应用程序的消息泵。
	return FALSE;
}
