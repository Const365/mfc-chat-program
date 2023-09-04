#pragma once


class CChatProgramSeverDlg : public CDialogEx
{
// 생성입니다.
public:
	CChatProgramSeverDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHATPROGRAMSEVER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	// 생성된 메시지 맵 함수
	DECLARE_MESSAGE_MAP()
private:
	CListCtrl m_list_UserInfo;	// 사용자 정보 전시 리스트
	CButton m_btn_SendMsg;		// 사용자 메시지 전송 버튼
	CButton m_btn_Unconnect;	// 통신 연결 끊기 버튼

	void SetUserInfoList();		// 리스트 헤더 초기화 및 기타 설정

	afx_msg void OnClickedBtnSendMsg();		// 사용자 메시지 전송 처리
	afx_msg void OnClickedBtnUnconnect();	// 사용자 통신 연결 끊기 처리
};
