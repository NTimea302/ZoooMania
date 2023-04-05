#include "Aquatic.h"
#include <iostream>
using namespace std;

void Aquatic::see_attributes() {
	Animal::see_attributes();
	cout << "The animal lives in: ";
	if (!Salty_water) cout << "fresh (river)";
	else
		if (!Fresh_water) cout << "salty";
		else cout << "mixed (fresh or salty)";
	cout << " water\n";
}

void Aquatic::eating_schedule() {
	Animal::eating_schedule();
	cout << "The type of food the animal needs:";
	if (!Salty_water) cout << "Options include live brine or ghost shrimp, feeder fish (for larger carnivorous fish), crickets, and worms. Greens: If your fish are the type to munch on aquarium plants, such as anacharis, give them greens as well. Options include lettuce, cucumber, zucchini, and spinach.\n";
	else
		if (!Fresh_water) cout << "algae, seagrasses, sponges, crabs, shrimp, worms, and clams\n";
		else cout << "Options include live brine or ghost shrimp, feeder fish (for larger carnivorous fish), crickets, and worms as well as algae, seagrasses, sponges, crabs, shrimp, worms, and clams. Greens: If your fish are the type to munch on aquarium plants, such as anacharis, give them greens as well. Options include lettuce, cucumber, zucchini, and spinach.\n";

}

Aquatic::Aquatic() : Animal{}, Fresh_water{ 0 }, Salty_water{ 0 }{

}

Aquatic::Aquatic(int strength, int speed, int year, int month, int day, int weight, bool He, bool F, bool S) : Animal{ strength, speed, year, month, day, weight, He } {
	Fresh_water = F;
	Salty_water = S;
}

Aquatic::~Aquatic() {}

void Aquatic::setvalues() {
	Animal::setvalues();
	cout << "Fresh water ( bool ) :"; cin >> Fresh_water;
	cout << "Salty water ( bool ) :"; cin >> Salty_water;
}
