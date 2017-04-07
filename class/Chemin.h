#ifndef chemin
#define chemin

#include"Fitness.h"
#include"Chromosome.h"

class Chemin{
    private:
        int score;
    public:
	Chemin();
	Chemin(int);
	int GetScore();
	void SetScore(int);
};


#endif
