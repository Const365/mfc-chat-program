#include "pch.h"
#include "framework.h"
#include "ChatProgramClient.h"
#include "ChatProgramClientDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

void CChatProgramClientDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CChatProgramClientDlg, CDialogEx)
END_MESSAGE_MAP()


CChatProgramClientDlg::CChatProgramClientDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CHATPROGRAMCLIENT_DIALOG, pParent)
{
	
}