#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include <string>

#include "PillarOfDoom.h"

class Programmer
{
public:
	Programmer(const std::string& name) :name_(name) {};
	virtual ~Programmer() {};

	virtual void damagePillar(PillarOfDoom& pillar) = 0;

protected:
	std::string name_;
};

#endif //PROGRAMMER_H