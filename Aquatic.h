#ifndef _AQUATIC_H_
#define _AQUATIC_H_
#include "Animal.h"

class Aquatic : public Animal
{
private:
	bool Fresh_water; //	Represents whether the animal lives in salty or in fresh water
	bool Salty_water; //    If both true, then the animal lives in mixed water
public:
	virtual void eating_schedule()override;
	virtual void see_attributes()override;
	void setvalues();
	Aquatic(int, int, int, int, int, int, bool, bool, bool);
	Aquatic();
	~Aquatic();
};

#endif // _AQUATIC_H_