#include "AaronProgrammer.h"
#include <iostream>

AaronProgrammer::AaronProgrammer(const std::string& name) : Programmer(name)
{
	//name_ = name;

}


AaronProgrammer::~AaronProgrammer()
{
}

void AaronProgrammer::damagePillar(PillarOfDoom& pillar)
{
	int damage = 0;

	for (int i = 0; i < name_.length(); i += 1)
	{
		char fixed = tolower(name_[i]);
		//std::cout << fixed << std::endl;

		if (fixed == 'a' || fixed == 'e' || fixed == 'i' || fixed == 'o' || fixed == 'u')
		{
			damage += name_[i] * 3;
			//std::cout << damage << std::endl;
		}

		else
		{
			damage += name_[i];
			//std::cout << damage << std::endl;
		}
	}
	pillar.damage(damage / 10);
}
