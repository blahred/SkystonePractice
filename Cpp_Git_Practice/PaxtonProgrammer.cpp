#include "PaxtonProgrammer.h"



PaxtonProgrammer::PaxtonProgrammer(const std::string& name)
	:Programmer(name)
{
}


PaxtonProgrammer::~PaxtonProgrammer()
{
}

void PaxtonProgrammer::damagePillar(PillarOfDoom& pillar)
{
	std::cout << name_ << std::endl;
	//result = 0
	//for character in name_: //or for i in range(len(name_)):
	//		result += character//		result += name_[i]
	//pillar.damage(result % 200)
	int result = 0;
	for (unsigned int i = 0; i < name_.size(); ++i)

	{
		result += name_[i];
	}
	pillar.damage(result%200);
}
