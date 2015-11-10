#ifndef CHRISTIAN_PROGRAMMER_H
#define CHRISTIAN_PROGRAMMER_H

#include "Programmer.h"
#include <string>


class ChristianProgrammer :
	public Programmer
{
public:
	ChristianProgrammer(std::string name);
	virtual ~ChristianProgrammer();

	virtual void damagePillar(PillarOfDoom& pillar);

private:
	unsigned int getNameSum();
	unsigned int calcDmg(unsigned int nameSum);
	unsigned int getLeastSigKBits(unsigned int nameSum, unsigned int k);
	unsigned int getFlippedBits(unsigned int toFlip, unsigned int numBits);
};

#endif //CHRISTIAN_PROGRAMMER_H