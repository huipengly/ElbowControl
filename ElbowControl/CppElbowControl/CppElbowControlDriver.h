///////////////////////////////////////////////////////////////////////////////
// CppElbowControlDriver.h

#ifndef __CPPELBOWCONTROLDRIVER_H__
#define __CPPELBOWCONTROLDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define CPPELBOWCONTROLDRV_NAME        "CPPELBOWCONTROL"
#define CPPELBOWCONTROLDRV_Major       1
#define CPPELBOWCONTROLDRV_Minor       0

#define DEVICE_CLASS CCppElbowControlDriver

#include "ObjDriver.h"

class CCppElbowControlDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl CPPELBOWCONTROLDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(CPPELBOWCONTROLDRV)
	VxD_Service( CPPELBOWCONTROLDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __CPPELBOWCONTROLDRIVER_H__