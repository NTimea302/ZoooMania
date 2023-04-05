#include "Hospital.h"
#include <iostream>
using namespace std;

void Hospital::print_content() {
	cout << "Hospital capacity: " << no_animal_max << " animals\n";
	cout << "Currently occupied: " << no_animal_current << " animals\n";
}

void Hospital::actualise_animal_list(Animal& A) {
	if (A.healthy == 0)
		if (no_animal_max > no_animal_current)
			no_animal_current++;
		else
			cout << "The hospital is at max capacity. Can not internate more animals.\n";
}

Hospital::Hospital(int cap) : no_animal_max{ cap }, no_animal_current{ 0 } {

}

Hospital::~Hospital() {}