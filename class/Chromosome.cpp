#include"Chromosome.h"

Chromosome:: Chromosome()
{
  taille = 0;
  genes = 0;
}

Chromosome:: Chromosome(int t, Gene* g)
{
  if (taille != t)
    {
      taille = t;
      delete[] genes;
      genes = new Gene[taille];
    }
  for(int i=0; i<taille; i++)
    {
      genes[i] = g[i];
    }
}

Chromosome:: ~Chromosome()
{
  delete[] genes;
}
