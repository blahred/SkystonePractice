#include "PillarOfDoom.h"



PillarOfDoom::PillarOfDoom(unsigned int startingHealth)
	:health_(startingHealth)
{
}


PillarOfDoom::~PillarOfDoom()
{
}

void PillarOfDoom::damage(unsigned int dmg)
{
	health_ -= dmg;
}

unsigned int PillarOfDoom::getHealth()
{
	return health_;
}
