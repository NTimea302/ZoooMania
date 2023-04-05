#include "Terrestrial.h"
#include <iostream>
using namespace std;

void Terrestrial::see_attributes() {
	Animal::see_attributes();
	cout << "The animal is: ";
	if (!Herbivore) cout << "Carnivore\n";
	else
	if (!Carnivore) cout << "Herbivore\n";
	else cout << "Omnivore\n";
}

void Terrestrial::eating_schedule() {
	Animal::eating_schedule();
	cout << "The type of food the animal needs:";
	if (!Herbivore) cout << "Meat\n";
	else
	if (!Carnivore) cout << "Plants\n";
	else cout << "Meat and Plants\n";
}

Terrestrial::Terrestrial() : Animal{}, Herbivore{ 0 }, Carnivore{ 0 }{

}

Terrestrial::Terrestrial(int strength, int speed, int year, int month, int day, int weight, bool He, bool H, bool C): Animal {strength, speed, year, month, day, weight, He} {
	Herbivore = H;
	Carnivore = C;
}

Terrestrial::~Terrestrial() {}

void Terrestrial::setvalues() {
	Animal::setvalues();
	cout << "Carnivore ( bool ) :"; cin >> Carnivore;
	cout << "Herbivore ( bool ) :"; cin >> Herbivore;
}