#ifndef _FLYING_H_
#define _FLYING_H_
#include "Terrestrial.h"

class Flying : public Terrestrial
{
private:
	bool night;		   //shows if the animal is active at night
	bool migrate;      //this is a special condition, if the animal migrates, it means that it needs differrent type of food in winther then in summer
	bool NorthernPole; //Animals need a special kind of food if they live on the NP :)
public:
	virtual void eating_schedule()override;
	virtual void see_attributes()override;
	void setvalues();
	Flying();
	Flying(int, int, int, int, int, int, bool, bool, bool, bool, bool, bool); //strength, speed, birthday year, birthday month, birthday day, weight, herbivore, carnivore, night, migrate, NorthernPole
	~Flying();
};

#endif // _FLYING_H_