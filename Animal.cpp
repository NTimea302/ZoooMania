#include<iostream>
#include "Animal.h"
using namespace std;

float Animal::calculate(int a)
{
	float x = 0;
	if (a < 3)			x = x + 0.1;
	else if (a < 9)		x = x + 0.2;
	else if (a < 19)	x = x + 0.5;
	else if (a < 29)	x = x + 0.7;
	else if (a < 55)	x = x + 1;
	else if (a < 74)	x = x + 1.5;
	else if (a <= 100)	x = x + 2;
	return x;
}

void Animal::eating_schedule()
{										
	float F = 0; //total food amount per day
	int t = 2;   //how many times the animal needs food one day

	F = F + calculate(strength);
	F = F + calculate(speed);
	F = F + calculate(age.yearsold());
	if (weight >= 2000)     F = F + 10;
	else if (weight > 1000) F = F + 5;
	else if (weight > 500)  F = F + 3;
	else if (weight > 250)  F = F + 2.5;
	else if (weight > 100)  F = F + 2;
	else if (weight > 50)   F = F + 1;
	
	if (age.yearsold() < 1) t = t + 3;
	else if (age.yearsold() < 3) t = t + 2;
	cout << "\nBased on the animal's strength, speed, age and weight, it should get " << F << " kg of food, " << t << " times a day!";
	if (t == 2) {
		float kg = F / t;
		cout << "\n 8 am:" << kg << " kg of food";
		cout << "\n10 pm:" << kg << " kg of food\n";
	}
	else if (t == 4) {
		float kg = F / t;
		cout << "\n 8 am:" << kg << " kg of food";
		cout << "\n12 am:" << kg << " kg of food";
		cout << "\n 6 pm:" << kg << " kg of food";
		cout << "\n10 pm:" << kg << " kg of food\n";
	}
	else if (t == 5) {
		float kg = F / t;
		cout << "\n 8 am: " << kg << " kg of food";
		cout << "\n12 am: " << kg << " kg of food";
		cout << "\n 3 pm: " << kg << " kg of food";
		cout << "\n 7 pm: " << kg << " kg of food";
		cout << "\n10 pm: " << kg << " kg of food\n";
	}
		
}

void Animal::see_attributes()
{
	//cout << "\nThe attributes of the animal are:
	cout<<"Birthday: ";
	age.printBd();
	cout << "\nStrength: " << strength << "\nSpeed: " << speed << "\nWeight: " << weight <<"\nHealth conditions: the animal is crrently ";
	if (healthy)
		cout << "healthy\n";
	else
		cout << "sick\n";
}

Animal::Animal() : strength{ 0 }, speed{ 0 }, age{ 0, 0, 0 }, weight{ 0 }, healthy{ 0 }{

}

Animal::Animal(int strength, int speed, int year, int month, int day, int weight, bool healthy) : strength { strength }, speed{ speed }, healthy{ healthy }, age{ year, month, day }, weight{ weight }{

}

Animal::~Animal() {

}

void Animal::printBirthday() {
	age.printBd();
}

void Animal::setvalues() {
	//cout << "Please enter the data:\n";
	cout << "Strength ( 0 - 100 ): "; cin >> strength;
	cout << "Speed ( 0 - 100 ): "; cin >> speed;
	cout << "Weight ( 0 - 5000 ): "; cin >> weight;
	cout << "Date of birth (dd mm yyyy):"; age.setval();
	cout << "!! For the boolean types please enter 0 or 1 !!\n";
	cout << "Health condition (bool, 1 - healthy, 0 - health problems) :"; cin >> healthy;
}