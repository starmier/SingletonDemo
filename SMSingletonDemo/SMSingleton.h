#pragma once

#include "ISMSingleton.h"

class SMSingleton
: public ISMSingleton
{
public:
	SMSingleton();
	~ SMSingleton();
	
public:
	static void create();
	static void release();
	static SMSingleton* instance();
	
	void testlog();
	
private:
	static SMSingleton* m_pSMSingleton;
};
