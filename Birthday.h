#ifndef _BIRTHDAY_H_
#define _BIRTHDAY_H_

class Birthday final
{
private:
	int year, day, month;
public:
	Birthday(int d, int m, int y);
	void printBd();
	int yearsold();
	void setval();
	Birthday();
	~Birthday();
};

#endif //_BIRTHDAY_H_
