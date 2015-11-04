#include <string>
#include <iostream>
#include <vector>

#include "PillarOfDoom.h"
#include "Programmer.h"

//***YOUR CLASS INCLUDES HERE***




//***YOUR CLASS INCLUDES HERE***

#define FULL_PARTY_BONUS 722

int main(int argc, char** argv)
{
	PillarOfDoom pillar(1000);

	std::vector<Programmer*> programmers;

	//add a new'd instance (via pointer) of your class to the vector here. Use vector.push_back()





	//add a new'd instance (via pointer) of your class to the vector

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





	//delete your new'd instance here

	return 0;
}