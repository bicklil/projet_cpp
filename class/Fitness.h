#ifndef fitness
#define fitness

#include"Population.h"

class Fitness{
 private:
  int Critere;
  int TailleChemin;
 public:
  Fitness();
  int* MeilleursChemins(int, int, Population);
};

#endif
