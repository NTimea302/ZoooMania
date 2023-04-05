#include <iostream>
#include "Birthday.h"
using namespace std;

Birthday::Birthday(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

Birthday::Birthday() {
	day = 0;
	month = 0;
	year = 0;
}

Birthday::~Birthday() {}

void Birthday::printBd() {
	cout << year << "." << month << "." << day << " ";
}

int Birthday::yearsold() {
	int d, m, y;
	y = 2021 - year;
	if (4 < month) //April - 4
	{
		y--;
		m = 12 - (month - 4);
	}
	else
	{
		m = 4 - month;
	}
	if (20 < day) //calculate age at April 20
	{
		m--;
		d = 30 - (day - 20);
	}
	else
	{
		d = 20 - day;
	}
	return y;
}

void Birthday::setval() {
	cin >> day >> month >> year;
}