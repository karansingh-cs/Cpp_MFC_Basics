// COptions.cpp : implementation file
//

#include "pch.h"
#include "SimpleDialog.h"
#include "afxdialogex.h"
#include "COptions.h"


// COptions dialog

IMPLEMENT_DYNAMIC(COptions, CDialogEx)

COptions::COptions(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_OPTIONS, pParent)
{

}

COptions::~COptions()
{
}

void COptions::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(COptions, CDialogEx)
END_MESSAGE_MAP()


// COptions message handlers
