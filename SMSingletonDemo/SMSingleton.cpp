#include "SMSingleton.h"
#include <iostream>


SMSingleton* SMSingleton::m_pSMSingleton = NULL;

void createSMSingleten()
{
	SMSingleton::create();
}

ISMSingleton* getSMSingleten()
{
	return SMSingleton::instance();
}

void releaseSMSingleton()
{
	SMSingleton::release();
}

SMSingleton::SMSingleton()
{
	
}

SMSingleton::~SMSingleton()
{
	
}

void SMSingleton::create()
{
	if (m_pSMSingleton)
	{
		m_pSMSingleton = new SMSingleton();
	}
}

void SMSingleton::release()
{
	if (m_pSMSingleton)
	{
		delete m_pSMSingleton;
		m_pSMSingleton = NULL;
	}
}

SMSingleton* SMSingleton::instance()
{
	return m_pSMSingleton;
}

void SMSingleton::testlog()
{
	std::cout << "Value of str is : " << "smsingleton test" << std::endl;
}
