///////////////////////////////////////////////////////////////////////////////
// CppElbowControlDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "CppElbowControlDriver.h"
#include "CppElbowControlClassFactory.h"

DECLARE_GENERIC_DEVICE(CPPELBOWCONTROLDRV)

IOSTATUS CCppElbowControlDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CCppElbowControlClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CCppElbowControlDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CCppElbowControlDriver::CPPELBOWCONTROLDRV_GetVersion( )
{
	return( (CPPELBOWCONTROLDRV_Major << 8) | CPPELBOWCONTROLDRV_Minor );
}

