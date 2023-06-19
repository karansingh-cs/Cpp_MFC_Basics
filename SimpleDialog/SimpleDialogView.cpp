
// SimpleDialogView.cpp : implementation of the CSimpleDialogView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "SimpleDialog.h"
#endif

#include "SimpleDialogDoc.h"
#include "SimpleDialogView.h"
#include "COptions.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSimpleDialogView

IMPLEMENT_DYNCREATE(CSimpleDialogView, CView)

BEGIN_MESSAGE_MAP(CSimpleDialogView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_NEW_OPTIONS, &CSimpleDialogView::OnToolsOptions)
END_MESSAGE_MAP()

// CSimpleDialogView construction/destruction

CSimpleDialogView::CSimpleDialogView() noexcept
{
	// TODO: add construction code here

}

CSimpleDialogView::~CSimpleDialogView()
{
}

BOOL CSimpleDialogView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CSimpleDialogView drawing

void CSimpleDialogView::OnDraw(CDC* /*pDC*/)
{
	CSimpleDialogDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}

void CSimpleDialogView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CSimpleDialogView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CSimpleDialogView diagnostics

#ifdef _DEBUG
void CSimpleDialogView::AssertValid() const
{
	CView::AssertValid();
}

void CSimpleDialogView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSimpleDialogDoc* CSimpleDialogView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSimpleDialogDoc)));
	return (CSimpleDialogDoc*)m_pDocument;
}
#endif //_DEBUG


// CSimpleDialogView message handlers


void CSimpleDialogView::OnToolsOptions()
{
	COptions dlgOptions;
	dlgOptions.DoModal();
}
