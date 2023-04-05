/***********************************************************************************************************************
*    --ZooMania--																									   *
*																													   *
*    What is the purpose of this application?																		   *
*    This application gives the user a detailed eating schedule for different kind of animals in a zoo.				   *
*    Their need for sleep and food varies with their attributes (ex weight, what kind of water do they live in, or     *
*    whether they are harbivore or carnivore )																		   *
*	 The user can view each animals's attributes.																	   *
*	 Each animal has his birthday recorded, and a special eating plan, depending on their needs						   *
*    The Zoo has a Hospital, where animals can be treated if they are sick.                                            *
*    The Hospital Class highlights the friendship between the classes. The Birthday Class highlights composition.      *
************************************************************************************************************************/
#include <iostream>
#include "Interface.h"
#include "Animal.h"
#include "Birthday.h"
#include "Terrestrial.h"
#include "Aquatic.h"
#include "Flying.h"
#include "Hospital.h"
using namespace std;

int main()
{
	/**Example Birthday
	Birthday mybd{ 2,3,2001 };
	mybd.printBd();
	int x = mybd.yearsold();
	cout << endl << x;*/

	//Example of an Animal's eating schedule and attributes list with constructor with parameters
	cout << "============== E X A M P L E 1  -  Animal ==========================\n";
	Animal Oath_the_sloth{30, 2, 2001, 03, 02, 13, 1 }; //name, strength, speed, birthday year, birthday month, birthday day, weight, healthy
	cout << "Eating schedule for a sloth:";
	Oath_the_sloth.eating_schedule();
	cout << "The attributes of the sloth:\n";
	Oath_the_sloth.see_attributes();
	cout << endl << endl;

	//Example of a Terrestrial animal's eating schedule and attributes list with constructor with parameters
	cout << "============== E X A M P L E 2  -  Terrestrial animal ==============\n";
	Terrestrial Olga_the_snake{20, 15, 2008, 05, 13, 1, 1, 0, 1}; //name, strength, speed, birthday year, birthday month, birthday day, weight, healthy, herbivore, carnivore, The snake is a carnivore
	cout << "Eating schedule for a snake:";
	Olga_the_snake.eating_schedule();
	cout << "The attributes of the snake:\n";
	Olga_the_snake.see_attributes();
	cout << endl << endl;

	//Example of an Aquatic animal's eating schedule and attributes list with constructor with parameters
	cout << "============== E X A M P L E 3  -  Aquatic animal ==================\n";
	Aquatic Gigi_the_fish{3, 30, 2020, 12, 02, 2, 1, 1, 1 }; //name, strength, speed, birthday year, birthday month, birthday day, weight, healthy, fresh water, salty water
	cout << "Eating schedule for a fish:";
	Gigi_the_fish.eating_schedule();
	cout << "The attributes of the fish:\n";
	Gigi_the_fish.see_attributes();
	cout << endl << endl;

	//Example of a Flying animal's eating schedule and attributes list with constructor with parameters
	cout << "============== E X A M P L E 4  -  Flying animal ===================\n";
	Flying Mird_the_bird{8, 85, 2021, 01, 04, 1, 1, 0, 0, 0, 0, 1 }; //name, strength, speed, birthday year, birthday month, birthday day, weight, herbivore, carnivore, night, migrate, NorthernPole, healthy
	cout << "Eating schedule for a bird:";
	Mird_the_bird.eating_schedule();
	cout << "The attributes of the bird:\n";
	Mird_the_bird.see_attributes();
	cout << endl << endl;

	//Example of an Animal's eating schedule and attributes list with constructor with NO parameters
	cout << "============== E X A M P L E 5  -  Animal ==========================\n";
	Animal Mickey_the_monkey{ }; 
	cout << "Please enter Mickey the monkey's data:\n";
	Mickey_the_monkey.setvalues();
	cout << "Eating schedule for a monkey:";
	Mickey_the_monkey.eating_schedule();
	cout << "The attributes of the monkey:\n";
	Mickey_the_monkey.see_attributes();
	cout << endl << endl;

	//Example of a Terrestrial animal's eating schedule and attributes list with constructor with NO parameters
	cout << "============== E X A M P L E 6  -  Terrestrial animal ==============\n";
	Terrestrial Speedy_the_spider{};
	cout << "Please enter Speedy the spider's data:\n";
	Speedy_the_spider.setvalues();
	cout << "Eating schedule for a spider:";
	Speedy_the_spider.eating_schedule();
	cout << "The attributes of the spider:\n";
	Speedy_the_spider.see_attributes();
	cout << endl << endl;

	//Example of an Aquatic animal's eating schedule and attributes list with constructor with NO parameters
	cout << "============== E X A M P L E 7  -  Aquatic animal ==================\n";
	Aquatic Octi_the_octopus{};
	cout << "Please enter Octi the octopus's data:\n";
	Octi_the_octopus.setvalues();
	cout << "Eating schedule for an octopus:";
	Octi_the_octopus.eating_schedule();
	cout << "The attributes of the octopus:\n";
	Octi_the_octopus.see_attributes();
	cout << endl << endl;

	//Example of a Flying animal's eating schedule and attributes list with constructor with NO parameters
	cout << "============== E X A M P L E 8  -  Flying animal ===================\n";
	Flying Howl_the_owl{};
	cout << "Please enter Howl the owl's data:\n";
	Howl_the_owl.setvalues();
	cout << "Eating schedule for an owl:";
	Howl_the_owl.eating_schedule();
	cout << "The attributes of the owl:\n";
	Howl_the_owl.see_attributes();
	cout << endl << endl;

	Hospital ZooManiaHospital{20};
	cout << "The ZooManiaHospital's data before internating the animals\n";
	ZooManiaHospital.print_content();

	//Checking which animals are being interned
	ZooManiaHospital.actualise_animal_list(Oath_the_sloth);
	ZooManiaHospital.actualise_animal_list(Olga_the_snake);
	ZooManiaHospital.actualise_animal_list(Gigi_the_fish);
	ZooManiaHospital.actualise_animal_list(Mird_the_bird);
	ZooManiaHospital.actualise_animal_list(Mickey_the_monkey);
	ZooManiaHospital.actualise_animal_list(Speedy_the_spider);
	ZooManiaHospital.actualise_animal_list(Octi_the_octopus);
	ZooManiaHospital.actualise_animal_list(Howl_the_owl);

	cout << "The ZooManiaHospital's data after internating the sick animals\n";
	ZooManiaHospital.print_content();

	return 0;
}