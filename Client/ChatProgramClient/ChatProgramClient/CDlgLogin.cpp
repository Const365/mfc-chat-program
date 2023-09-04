#include "pch.h"
#include "ChatProgramClient.h"
#include "CDlgLogin.h"

IMPLEMENT_DYNAMIC(CDlgLogin, CDialogEx)

CDlgLogin::CDlgLogin(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DLG_LOGIN, pParent)
{
	// 통신 연결
}

CDlgLogin::~CDlgLogin()
{
	// 통신 해제
}

void CDlgLogin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_ID, m_edit_ID);
	DDX_Control(pDX, IDC_EDIT_PW, m_edit_PW);
	DDX_Control(pDX, IDC_BTN_LOGIN, m_btn_Login);
}


BEGIN_MESSAGE_MAP(CDlgLogin, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_LOGIN, &CDlgLogin::OnClickedBtnLogin)
END_MESSAGE_MAP()

void CDlgLogin::OnClickedBtnLogin()
{
	// 로그인 버튼 클릭 시 처리

	/*
		1. 서버와 클라이언트간 통신 여부 확인
		1-1. 정상 연결 상태
		 1-1-1. 서버에 계정 정보 전달
		  1-1-1-1. 존재하는 계정이면 Main Dlg 이동
		  1-1-1-2. 존재하지 않는 계정이면 메시지 박스 전시
		1-2. 비정상 연결 상태
		  - 메시지 박스 전시
	*/
}
