#ifndef chromosome
#define chromosome

#include"Croisement.h"

class Chromosome{
 private:
  int taille;
  int* coordonnees;
 public:
  Chromosome();
  Chromosome(int, int*);
  ~Chromosome();
  int GetTaille();
};

#endif
