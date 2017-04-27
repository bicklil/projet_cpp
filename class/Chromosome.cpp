#include"Chromosome.h"

Chromosome:: Chromosome()
{
  taille = 0;
}

Chromosome:: Chromosome(int t)
{
  taille = t;
}

Chromosome:: Chromosome(const Chromosome& C)
{
  taille = C.taille;
}

int Chromosome:: GetTaille()
{
  return taille;
}
