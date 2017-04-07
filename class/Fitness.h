#ifndef fitness
#define fitness

#include"Chemin.h"

class Fitness{
    private:
        int DistanceCalculee;
    public:
	Fitness();
	Fitness(int);
	int GetDistance();
    };

#endif
