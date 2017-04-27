#ifndef gene
#define gene
#include "Ville.h"

class Gene
{
  private:
    int numGene;
    Ville VilleEq;
  public:
    Gene();
    Gene(const Gene&);
    void SetnumGene(int);
    int GetGene();
    void SetCoords(int, int);
};

#endif
