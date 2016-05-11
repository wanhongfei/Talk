// tsDlg.h : header file
//

#if !defined(AFX_TSDLG_H__FF52AAE6_FDC6_11D9_BC43_000795DF7F99__INCLUDED_)
#define AFX_TSDLG_H__FF52AAE6_FDC6_11D9_BC43_000795DF7F99__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTsDlg dialog

#include "CSocket.h"
#include "LSocket.h" 
#include <map>
#include <iostream>
using namespace std;

class CMsg;

class CTsDlg : public CDialog
{
// Construction
public:
	CTsDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTsDlg)
	enum { IDD = IDD_TS_DIALOG };
	CStatic	m_staNum;
	CButton	m_btnClose;
	CListBox	m_listMsg;
	CButton	m_btnListen;
	UINT	m_nPort;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTsDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTsDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonListen();
	afx_msg void OnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

//Attributes
public:
	CLSocket*  m_pLSocket; //�����׽���ָ�����
	CPtrList m_connList;   //�����б�
	map<CString, CCSocket*> table;

//Operations
public:
	//������������
	void OnAccept();      
	//��ȡ�ͻ����ķ�����Ϣ
	void OnReceive(CCSocket* pSocket);
	//�������ҵ����еĿͻ�ת����Ϣ
	void backClients(CMsg* pMsg);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TSDLG_H__FF52AAE6_FDC6_11D9_BC43_000795DF7F99__INCLUDED_)