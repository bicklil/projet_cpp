#ifndef fitness
#define fitness

#include"Population.h"

class Fitness{
 private:
  int Critere;
  int TailleChemin;
 public:
  Fitness();
  Fitness(int, int);
  int* MeilleursChemins(int, int, Population);
  void DecalageaGauche(int*, int);
};

#endif
