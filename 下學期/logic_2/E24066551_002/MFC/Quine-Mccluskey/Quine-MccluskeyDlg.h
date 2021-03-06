
// Quine-MccluskeyDlg.h: 標頭檔
//

#pragma once
#include<string>
#include"Quine.h"
using namespace std;

// CQuineMccluskeyDlg 對話方塊
class CQuineMccluskeyDlg : public CDialogEx
{
// 建構
public:
	CQuineMccluskeyDlg(CWnd* pParent = nullptr);	// 標準建構函式
	string address="input.txt";/*存input的位址*/
	string output = "output.txt";/*存output的位址*/
	LPCTSTR string_(string);/*把string轉為LPCTSTR的funtion*/
	int num=10;/*bit數*/
// 對話方塊資料
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_QUINEMCCLUSKEY_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支援


// 程式碼實作
protected:
	HICON m_hIcon;

	// 產生的訊息對應函式
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeMfceditbrowse1();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeMfceditbrowse3();
	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeMfceditbrowse2();
	afx_msg void OnEnChangeMfceditbrowse5();
	afx_msg void OnBnClickedCancel();
};
