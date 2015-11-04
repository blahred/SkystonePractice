#ifndef PILLAR_OF_DOOM_H
#define PILLAR_OF_DOOM_H

class PillarOfDoom
{
public:
	PillarOfDoom(unsigned int startingHealth);
	~PillarOfDoom();

	void damage(unsigned int dmg);
	unsigned int getHealth(); 

private:
	unsigned int health_;

};

#endif //PILLAR_OF_DOOM_H