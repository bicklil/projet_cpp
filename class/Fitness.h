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
  void MeilleursChemins(Population, int*);
  void PiresChemins(Population, int*);
  void DecalageaGauche(int*, int);
};

#endif
