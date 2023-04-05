#ifndef _INTERFACE_H_
#define _INTERFACE_H_

class Interface //INTERFACE (abstract class with only pure virtual methods)
{
public:
	virtual void eating_schedule() = 0;
	virtual void see_attributes() = 0;
	Interface();
	~Interface();
};

#endif //_INTERFACE_H_