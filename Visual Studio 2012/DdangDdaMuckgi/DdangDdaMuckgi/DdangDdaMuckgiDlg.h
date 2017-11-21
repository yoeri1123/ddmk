
// DdangDdaMuckgiDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"

#include "highgui.h"
#include "cv.h"
#include "cxcore.h"
#include "ml.h"

// CDdangDdaMuckgiDlg ��ȭ ����
class CDdangDdaMuckgiDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CDdangDdaMuckgiDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

	CRect view;
	IplImage *m_view;
	CvvImage m_View;

	int map[7][7];
	int line[160][4]; //160��, �� ������ �� 80���� ������ �� ����
	int count;
	CvPoint start_point, end_point;
	bool chk;

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DDANGDDAMUCKGI_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_iView;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	int x_point1;
	int x_point2;
	int y_point1;
	int y_point2;
	int red_score;
	int blue_score;
	afx_msg void OnBnClickedInput();
	CString team_name;
	CString histo;
	afx_msg void OnBnClickedRestart();
};
