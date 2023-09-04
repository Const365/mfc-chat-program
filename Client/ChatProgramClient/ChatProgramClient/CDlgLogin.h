#pragma once

class CDlgLogin : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgLogin)

public:
	CDlgLogin(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDlgLogin();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_LOGIN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()

private:
	CEdit m_edit_ID;		// 사용자 ID
	CEdit m_edit_PW;		// 사용자 PW
	CButton m_btn_Login;	// 로그인 버튼


	afx_msg void OnClickedBtnLogin();	// 로그인 처리
};
