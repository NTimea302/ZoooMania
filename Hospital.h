#ifndef _HOSPITAL_H_
#define _HOSPITAL_H_
#include "Animal.h"

class Hospital
{
private:
	int no_animal_max;     
	int no_animal_current; 
public:
	void actualise_animal_list(Animal& A);  //The function checks, whether an animal is interned or not to the hospital
	void print_content();					//The function prints how many animals are currently in the hospital
	Hospital(int cap);
	~Hospital();
};

#endif // _HOSPITAL_H_
