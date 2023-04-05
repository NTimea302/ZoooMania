#ifndef _TERRESTRIAL_H_
#define _TERRESTRIAL_H_
#include "Animal.h"

class Terrestrial : public Animal
{
private:
	bool Herbivore;    //Represents whether the animal eats meat or green stuff
	bool Carnivore;    //If both true, then the animal eats both (Omnivore)
public:
	virtual void eating_schedule()override;
	virtual void see_attributes()override;
	void setvalues();
	Terrestrial(int, int, int, int, int, int, bool, bool, bool);
	Terrestrial();
	~Terrestrial();
};

#endif // _TERRESTRIAL_H_