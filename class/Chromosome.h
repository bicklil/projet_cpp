#ifndef chromosome
#define chromosome

#include "Croisement.h"
#include "Gene.h"

class Chromosome{
 public:
  static Chromosome& GetInstance()
  {
    static Chromosome instance;
    return instance;
  }
 private:
  int taille;
  Gene* genes;
  Chromosome();
  Chromosome(int, Gene*);
  ~Chromosome();
  Chromosome(const Chromosome&);
  int GetTaille();
};

#endif
