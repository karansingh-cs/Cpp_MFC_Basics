
// SimpleDialogView.h : interface of the CSimpleDialogView class
//

#pragma once


class CSimpleDialogView : public CView
{
protected: // create from serialization only
	CSimpleDialogView() noexcept;
	DECLARE_DYNCREATE(CSimpleDialogView)

// Attributes
public:
	CSimpleDialogDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CSimpleDialogView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SimpleDialogView.cpp
inline CSimpleDialogDoc* CSimpleDialogView::GetDocument() const
   { return reinterpret_cast<CSimpleDialogDoc*>(m_pDocument); }
#endif

