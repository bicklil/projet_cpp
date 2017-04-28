#ifndef fitness
#define fitness

#include"Population.h"

class Fitness{
 private:
  int Critere;
  int TailleChemin;
 public:
  Fitness();
  Fitness(int,int);
  int* MeilleursChemins(Population);
};

#endif
