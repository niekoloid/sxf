/**
	All Rights Reserved,(c) JACIC 2001
	SXFutyFunctionC.cpp								作成日：2000.4.13

	１．クラス概要
		共通関数クラス

	２．履歴
	履歴番号		日付け				担当者				概要
	作成			2000.4.13			宮園(FQS)			なし。

**/
#if !defined(AFX_SXFutyFunctionC_H__9B34E032_CF91_11D3_A393_009027565E9B__INCLUDED_)
#define AFX_SXFutyFunctionC_H__9B34E032_CF91_11D3_A393_009027565E9B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include <afx.h>

class SXFutyFunctionC  
{
public:
	static CString out_ctl(double IN_angle);
	SXFutyFunctionC();
	virtual ~SXFutyFunctionC();
};

#endif // !defined(AFX_SXFutyFunctionC_H__9B34E032_CF91_11D3_A393_009027565E9B__INCLUDED_)
