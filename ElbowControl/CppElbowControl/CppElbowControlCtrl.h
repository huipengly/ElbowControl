///////////////////////////////////////////////////////////////////////////////
// CppElbowControlCtrl.h

#ifndef __CPPELBOWCONTROLCTRL_H__
#define __CPPELBOWCONTROLCTRL_H__

#include <atlbase.h>
#include <atlcom.h>

#define CPPELBOWCONTROLDRV_NAME "CPPELBOWCONTROL"

#include "resource.h"       // main symbols
#include "CppElbowControlW32.h"
#include "TcBase.h"
#include "CppElbowControlClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CCppElbowControlCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CCppElbowControlCtrl, &CLSID_CppElbowControlCtrl>
	, public ICppElbowControlCtrl
	, public ITcOCFCtrlImpl<CCppElbowControlCtrl, CCppElbowControlClassFactory>
{
public:
	CCppElbowControlCtrl();
	virtual ~CCppElbowControlCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_CPPELBOWCONTROLCTRL)
DECLARE_NOT_AGGREGATABLE(CCppElbowControlCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCppElbowControlCtrl)
	COM_INTERFACE_ENTRY(ICppElbowControlCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __CPPELBOWCONTROLCTRL_H__
