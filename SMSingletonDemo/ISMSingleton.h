#pragma once

class ISMSingleton
{
protected:
	ISMSingleton() {}
	virtual ~ISMSingleton() {}
	
};

void createSMSingleten();
ISMSingleton* getSMSingleten();
void releaseSMSingleton();
