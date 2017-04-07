#include"Chromosome.h"

Chromosome:: Chromosome()
{
  taille = 0;
  coordonnees = 0;
}

Chromosome:: Chromosome(int t, int* coords)
{
  if (taille != t)
    {
      taille = t;
      delete[] coordonnees;
      coordonnees = new int[taille];
    }
  for(int i=0; i<taille; i++)
    {
      coordonnees[i] = coords[i];
    }
}

Chromosome:: ~Chromosome()
{
  delete[] coordonnees;
}
