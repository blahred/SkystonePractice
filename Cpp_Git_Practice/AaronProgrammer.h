#ifndef AARON_PROGRAMMER_H
#define AARON_PROGRAMMER_H

#include "Programmer.h"

class AaronProgrammer :
	public Programmer
{
public:
	AaronProgrammer(const std::string& name);
	virtual ~AaronProgrammer();

	void AaronProgrammer::damagePillar(PillarOfDoom& pillar);

};

#endif