#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <string.h>
#include "Interface.h"
#include "Birthday.h"

class Animal : public Interface //Class A
{
	friend class Hospital;
private:
	int strength;		// strength ( 0 - 100 )
	int speed;			// speed ( 0 - 100 )
	int weight;         // weight ( 0 - 5000)	
	bool healthy;       // 1 - healthy, 0 - not healthy 
	Birthday age;

public:
	float calculate(int);
	virtual void eating_schedule()override;
	virtual void see_attributes()override;
	void printBirthday();
	void setvalues();
	Animal();
	Animal(int, int, int, int, int, int, bool);
	~Animal();
};

#endif // _ANIMAL_H_