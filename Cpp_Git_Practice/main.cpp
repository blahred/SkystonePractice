#include <string>
#include <iostream>
#include <vector>

#include "PillarOfDoom.h"
#include "Programmer.h"

//***YOUR CLASS INCLUDES HERE***
#include "HarveyProgrammer.h"

//***YOUR CLASS INCLUDES HERE***
#include "PaxtonProgrammer.h"



//***YOUR CLASS INCLUDES HERE***

#define FULL_PARTY_BONUS 722

int main(int argc, char** argv)
{
	PillarOfDoom pillar(1000);

	std::vector<Programmer*> programmers;

	//add a new'd instance (via pointer) of your class to the vector here. Use vector.push_back()
	Programmer *programmer;
	programmer = new HarveyProgrammer("Harvey");
	programmers.push_back(programmer);
	std::cout << "Pillar Health: " << pillar.getHealth() << std::endl;
	PaxtonProgrammer* paxton = new PaxtonProgrammer("Paxton");
	programmers.push_back(paxton);




	//add a new'd instance (via pointer) of your class to the vector

	//for(initialization; check if this part is true; increment)
	for (unsigned int i = 0; i < programmers.size(); ++i)
	{
		programmers[i]->damagePillar(pillar);
		std::cout << "Pillar has " << pillar.getHealth() << " health left!" << std::endl;
	}
	std::cin.ignore();
	if (programmers.size() == 5)
	{
		pillar.damage(FULL_PARTY_BONUS);
		std::cout << "Pillar has " << pillar.getHealth() << " health left!" << std::endl;
		std::cout << "Pillar defeated" << std::endl;
	}

	//delete your new'd instance here
	delete programmer;
	delete paxton;




	//delete your new'd instance here

	return 0;
}