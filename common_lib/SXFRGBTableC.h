/**
	All Rights Reserved,(c) JACIC 2001
	SXFRGBTableC.cpp                ěŹúF2000.04.29

	PDNXTv
		Fe[uîńđÇˇé

	QDđ
	    đÔ    útŻ         SŇ		Tv
		ěŹ		2000.4.29     {(FQS)
**/
#ifndef _SXFRGBTABLEC_H_
#define _SXFRGBTABLEC_H_

#include <math.h>
#include <string.h>
#include <afxtempl.h>
#include "SXFDefaultRGBC.h"

typedef CArray<SXFDefaultRGBC,SXFDefaultRGBC&> SXFDEFAULTCOLORTABLE;

class SXFRGBTableC{
public:
	SXFRGBTableC();
	~SXFRGBTableC();
	BOOL GetColorCode(const char*,int&);
private:
	SXFDEFAULTCOLORTABLE m_DefaultColorTable;		/* FĂ°ĚŢŮ */

};

#endif//_SXFRGBTABLEC_H_
