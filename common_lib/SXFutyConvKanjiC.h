/**
	All Rights Reserved,(c)JACIC 2001
	SXFutyConvKanjiC.h						ì¬úF2000.04.17

	PDNXTv
		JISR[h©¨UNICODEÌÏ·

	QDð
		ðÔ	út		SÒ			Tv
		ì¬		2000.04.17	{(FQS)		ÈµB
		XV		2015.04.27	T.Matsushima	JPCERT/CC wE Æã«Î
**/

#if !defined(AFX_UTYCONVKANJI_H__26C0F4A1_D841_11D3_8D34_0000E2071B4B__INCLUDED_)
#define AFX_UTYCONVKANJI_H__26C0F4A1_D841_11D3_8D34_0000E2071B4B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class SXFutyConvKanjiC  
{
public:
	static int AddTable(int KanjiTable[]);
//	JPCERT/CC wE Æã«Î	T.Matsushima	2015.04.27
//	static int ConvKanji(char *Direction,char *InChar,char *OutChar);
	static int ConvKanji(char *Direction,char *InChar,char *OutChar,size_t OutCharSize);	// obt@TCYðn·æ¤ÉÏX
	SXFutyConvKanjiC();
	virtual ~SXFutyConvKanjiC();

};

#endif // !defined(AFX_UTYCONVKANJI_H__26C0F4A1_D841_11D3_8D34_0000E2071B4B__INCLUDED_)
