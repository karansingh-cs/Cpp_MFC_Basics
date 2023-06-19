#pragma once
#include "afxdialogex.h"


// COptions dialog

class COptions : public CDialogEx
{
	DECLARE_DYNAMIC(COptions)

public:
	COptions(CWnd* pParent = nullptr);   // standard constructor
	virtual ~COptions();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_OPTIONS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
