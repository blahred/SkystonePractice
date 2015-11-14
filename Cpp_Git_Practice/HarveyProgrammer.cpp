#include "HarveyProgrammer.h"
#include <iostream>
#include <math.h>


HarveyProgrammer::HarveyProgrammer(const std::string &myName) 
	: Programmer(myName)
{
}

void HarveyProgrammer::damagePillar(PillarOfDoom & pillar)
{
	int x = 0;
	for (int i = 0; name_[i] != '\0';++i)
	{
		if (i % 2 == 0)
			x += (int)name_[i];
		else
			x -= (int)name_[i];
	}

	x = std::abs(x);
	pillar.damage(x);
}


HarveyProgrammer::~HarveyProgrammer()
{
}
