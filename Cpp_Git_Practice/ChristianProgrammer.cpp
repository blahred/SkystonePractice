#include "ChristianProgrammer.h"
#include <iostream>


ChristianProgrammer::ChristianProgrammer(std::string name)
	: Programmer(name) 
{
	
}


ChristianProgrammer::~ChristianProgrammer()
{
}

void ChristianProgrammer::damagePillar(PillarOfDoom& pillar)
{
	unsigned int sum = getNameSum();
	unsigned int dmg = calcDmg(sum);
	pillar.damage(dmg);
}

unsigned int ChristianProgrammer::getNameSum()
{
	unsigned int result = 0;
	for (auto& c : name_)
	{
		result += c;
	}
	return result;
}


unsigned int ChristianProgrammer::calcDmg(unsigned int nameSum)
{
	unsigned int result = 0; 
	unsigned int k = 8;

	unsigned int leastSigEightBits = getLeastSigKBits(nameSum, k);
	unsigned int flipped = getFlippedBits(leastSigEightBits, k);
	return flipped;
}

unsigned int ChristianProgrammer::getLeastSigKBits(unsigned int nameSum, unsigned int k)
{
	unsigned int result = 0;
	for (unsigned int i = 0; i < k; i++)
	{
		// unsigned int mask = 1 << i; // shift 1 left i times
		// unsigned int nameSumWithMask = nameSum & mask; // only one that can be true is the ith bit
		// result += nameSumWithMask;
		unsigned int thisSigBit = nameSum >> i;
		result += ((thisSigBit & 1) << i); 
	}

	return result;
}

unsigned int ChristianProgrammer::getFlippedBits(unsigned int toFlip, unsigned int numBits)
{
	unsigned int result = 0;
	for (unsigned int i = 0; i < numBits; i++)
	{
		unsigned int mask = 1 << i;
		unsigned int toFlipWithMask = ~toFlip & mask; //flip it, allow it only if mask is 1 there
		result += toFlipWithMask;
	}

	return result;
}