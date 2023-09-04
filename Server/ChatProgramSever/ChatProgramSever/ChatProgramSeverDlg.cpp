#include "pch.h"
#include "framework.h"
#include "ChatProgramSever.h"
#include "ChatProgramSeverDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CChatProgramSeverDlg::CChatProgramSeverDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CHATPROGRAMSEVER_DIALOG, pParent)
{
	// 리스트 헤더 초기화 및 기타 설정
	SetUserInfoList();

}

void CChatProgramSeverDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_USER_INFO_LIST, m_list_UserInfo);
	DDX_Control(pDX, IDC_BTN_SEND_MSG, m_btn_SendMsg);
	DDX_Control(pDX, IDC_BTN_UNCONNECT, m_btn_Unconnect);
}

BEGIN_MESSAGE_MAP(CChatProgramSeverDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_SEND_MSG, &CChatProgramSeverDlg::OnClickedBtnSendMsg)
	ON_BN_CLICKED(IDC_BTN_UNCONNECT, &CChatProgramSeverDlg::OnClickedBtnUnconnect)
END_MESSAGE_MAP()


void CChatProgramSeverDlg::SetUserInfoList()
{
	// 리스트 스타일 설정
	m_list_UserInfo.SetExtendedStyle(LVS_EX_CHECKBOXES);		// 체크박스
	m_list_UserInfo.SetExtendedStyle(LVS_EX_FULLROWSELECT);		// 컬럼 전체 선택 처리

	// 컬럼 헤더 초기화
	m_list_UserInfo.InsertColumn(0, _T("Comm Status"), LVCFMT_CENTER, 50);	// 통신 상태
	m_list_UserInfo.InsertColumn(1, _T("IP"), LVCFMT_CENTER, 150);	// IP
	m_list_UserInfo.InsertColumn(2, _T("Pprt"), LVCFMT_CENTER, 50);	// Port
	m_list_UserInfo.InsertColumn(3, _T("User ID"), LVCFMT_CENTER, 100);	// 사용자 ID
	m_list_UserInfo.InsertColumn(4, _T("User PW"), LVCFMT_CENTER, 100);	// 사용자 PW
}

void CChatProgramSeverDlg::OnClickedBtnSendMsg()
{
	// 사용자 메시지 전송 처리

	// 새 다이얼로그 생성
}


void CChatProgramSeverDlg::OnClickedBtnUnconnect()
{
	// 사용자 통신 연결 끊기 처리
}
