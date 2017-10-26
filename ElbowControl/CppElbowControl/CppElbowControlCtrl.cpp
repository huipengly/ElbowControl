// CppElbowControlCtrl.cpp : Implementation of CTcCppElbowControlCtrl
#include "TcPch.h"
#pragma hdrstop

#include "CppElbowControlW32.h"
#include "CppElbowControlCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CCppElbowControlCtrl

CCppElbowControlCtrl::CCppElbowControlCtrl() 
	: ITcOCFCtrlImpl<CCppElbowControlCtrl, CCppElbowControlClassFactory>() 
{
}

CCppElbowControlCtrl::~CCppElbowControlCtrl()
{
}

