#ifndef chromosome
#define chromosome

#include "Population.h"
#include "Gene.h"

class Chromosome: public Population
{
 private:
  int taille;
 public:
  Chromosome();
  Chromosome(int);
  Chromosome(const Chromosome&);
  int GetTaille();
};

#endif
