#ifndef chromosome
#define chromosome

#include "Gene.h"

class Chromosome
{
 private:
  int taille;
  Gene* Genes;
 public:
  Chromosome();
  Chromosome(int, int*, int*);
  Chromosome(const Chromosome&);
  Chromosome& operator=(const Chromosome& );
  ~Chromosome();
  int GetTaille();
  Gene* GetGene();
};

#endif
