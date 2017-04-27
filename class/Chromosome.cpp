#include"Chromosome.h"

Chromosome:: Chromosome()
{
  taille = 0;
  Genes = 0;
}

Chromosome:: Chromosome(int t, int* T1, int* T2):Population(t, 1)
{
  taille = t;
  Genes = new Gene[taille];
  for (int i=0; i< taille; i++)
    {
      Genes[i].SetVille(i, T1[i], T2[i]);
    }
}

Chromosome:: Chromosome(const Chromosome& C)
{
  taille = C.taille;
}

Chromosome:: ~Chromosome()
{
  delete[] Genes;
}

int Chromosome:: GetTaille()
{
  return taille;
}

Gene* Chromosome:: GetGene()
{
  return Genes;
}
