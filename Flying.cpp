#include "Flying.h"
#include <iostream>
using namespace std;

void Flying::see_attributes() {
	Terrestrial::see_attributes();
	cout << "Active time: ";
	if (night)
		cout << "night\n";
	else
		cout << "day\n";
	cout << "Migrates: ";
	if (migrate)  
		cout << "Yes\n"; 
	else
		cout << "No\n";
	if (NorthernPole) cout << "The animal lives on the NorthernPole, he needs ice and cold to survive!\n";
}

void Flying::eating_schedule(){
	Terrestrial::eating_schedule();
	if (night) cout << "The animal needs special care and attention at night!\n";
	if (migrate) cout << "The animal migrates, he needs another type of food in the winter!\n";
}

Flying::Flying() : night{ 0 }, migrate{ 0 }, NorthernPole{ 0 } {

}

Flying::Flying(int strength, int speed, int year, int month, int day, int weight, bool H, bool C, bool nt, bool m, bool NP, bool He) : Terrestrial(strength, speed, year, month, day, weight,He, H, C), night{ nt }, migrate{ m }, NorthernPole{ NP }{


}

Flying::~Flying(){}

void Flying::setvalues() {
	Terrestrial::setvalues();
	cout << "Night animal ( bool ) :"; cin >> night;
	cout << "Migrates ( bool ) :"; cin >> migrate;
	cout << "Lives on the NP ( bool ) :"; cin >> NorthernPole;
}