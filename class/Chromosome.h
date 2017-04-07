#ifndef chromosome
#define chromosome

#include "Croisement.h"
#include "Gene.h"

class Chromosome{
 private:
  int taille;
  Gene* genes;
 public:
  Chromosome();
  Chromosome(int, Gene*);
  ~Chromosome();
  //Chromosome(const &Chromosome);
  int GetTaille();
};

#endif
