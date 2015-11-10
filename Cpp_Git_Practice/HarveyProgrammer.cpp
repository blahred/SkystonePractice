#include "HarveyProgrammer.h"
#include <iostream>


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
		else if (i % 2 != 0)
		{
			if (x < 0)
				x *= -1;
			
			pillar.damage(x);
			std::cout << x << std::endl;
		}		
	}
}


HarveyProgrammer::~HarveyProgrammer()
{
}
