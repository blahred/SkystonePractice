#include <string>
#include <iostream>
#include <vector>

#include "PillarOfDoom.h"
#include "Programmer.h"

//***YOUR CLASS INCLUDES HERE***

#include "AaronProgrammer.h"
#include "HarveyProgrammer.h"
#include "ChristianProgrammer.h"
#include "PaxtonProgrammer.h"

//test pull request

//***YOUR CLASS INCLUDES HERE***

#define FULL_PARTY_BONUS 722

int main(int argc, char** argv)
{
	PillarOfDoom pillar(1000);
	std::cout << "Pillar Health: " << pillar.getHealth() << std::endl;

	std::vector<Programmer*> programmers;

	//add a new'd instance (via pointer) of your class to the vector here. Use vector.push_back()
	Programmer *programmer;
	programmer = new HarveyProgrammer("Harvey");
	programmers.push_back(programmer);

	AaronProgrammer* Aaron = new AaronProgrammer("Aaron");
	programmers.push_back (Aaron);

	PaxtonProgrammer* paxton = new PaxtonProgrammer("Paxton");
	programmers.push_back(paxton);

	Programmer* christian = new ChristianProgrammer("Christian");
	programmers.push_back(christian);


	//add a new'd instance (via pointer) of your class to the vector

	for (unsigned int i = 0; i < programmers.size(); ++i)
	{
		programmers[i]->damagePillar(pillar);
		std::cout << "Pillar has " << pillar.getHealth() << " health left!" << std::endl;
	}

	if (programmers.size() == 5)
	{
		pillar.damage(FULL_PARTY_BONUS);
		std::cout << "Pillar has " << pillar.getHealth() << " health left!" << std::endl;
		std::cout << "Pillar defeated" << std::endl;
	}
	std::cin.ignore();

	//delete your new'd instance here


	delete Aaron;
	delete programmer;
	delete paxton;
	delete christian;


	//delete your new'd instance here

	return 0;
}