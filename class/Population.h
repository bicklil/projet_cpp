#ifndef population
#define population

#include "Chromosome.h"

class Population: public Chromosome
{
 private:
  int taille;
  int generation;
 public:
  Population();
  Population(int, int);
  void GenerationUp();
};

#endif
