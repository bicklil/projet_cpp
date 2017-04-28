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
    void SetVille(int nouveaunum, int nouveaux, int nouveauy);
    Gene& operator=(const Gene& );
    int GetGene();
    int GetX();
    int GetY();
};

#endif
