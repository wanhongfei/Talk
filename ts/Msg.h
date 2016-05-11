// Msg.h: interface for the CMsg class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MSG_H__INCLUDED_)
#define AFX_MSG_H__INCLUDED_

//消息类定义
class CMsg : public CObject  
{
	DECLARE_DYNCREATE(CMsg);

//Construction
public:
	CMsg();
	virtual ~CMsg();

//Attributes
public:
	CString m_local_name;	//本地主机的名字
	CString m_dest_name;	//目的主机的名字
	CString m_strText;      //字符串成员
	BOOL m_bClose;          //是否关闭状态

//Implementation
public:
	virtual void Serialize(CArchive& ar);   //序列化函数
};

#endif // !defined(AFX_MSG_H__INCLUDED_)
