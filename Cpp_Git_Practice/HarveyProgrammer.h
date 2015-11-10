#ifndef HarveyProgrammer_H
#define HarveyProgrammer_H

#include "Programmer.h"
class HarveyProgrammer :
	public virtual Programmer
{
public:
	HarveyProgrammer(const std::string &myName);
	virtual void damagePillar(PillarOfDoom& pillar);
	virtual ~HarveyProgrammer();
private:
};

#endif /*HarveyProgrammer_H*/

