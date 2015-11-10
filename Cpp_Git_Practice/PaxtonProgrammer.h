#ifndef PAXTON_PROGRAMMER_H
#define PAXTON_PROGRAMMER_H

#include "Programmer.h"


#include <iostream>

class PaxtonProgrammer : public Programmer
{
public:
	PaxtonProgrammer(const std::string& name);
	virtual ~PaxtonProgrammer();

	virtual void damagePillar(PillarOfDoom& pillar);

};

#endif //PAXTON_PROGRAMMER_H

