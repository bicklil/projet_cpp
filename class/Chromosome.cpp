#include"Chromosome.h"

Chromosome:: Chromosome()
{
  taille = 0;
  Genes = 0;
}

Chromosome:: Chromosome(int t):Population(t, 1)
{
  taille = t;
  Genes = new Gene[taille];
  for (int i=0; i< taille; i++)
    {
      Genes[i].SetnumGene(i);
    }
}

Chromosome:: Chromosome(const Chromosome& C)
{
  taille = C.taille;
}

int Chromosome:: GetTaille()
{
  return taille;
}
