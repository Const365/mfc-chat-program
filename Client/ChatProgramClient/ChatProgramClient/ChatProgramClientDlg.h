
// ChatProgramClientDlg.h: 헤더 파일
//

#pragma once


// CChatProgramClientDlg 대화 상자
class CChatProgramClientDlg : public CDialogEx
{
// 생성입니다.
public:
	CChatProgramClientDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHATPROGRAMCLIENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:

	DECLARE_MESSAGE_MAP()
};
