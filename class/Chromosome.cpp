#include"Chromosome.h"
#include <iostream>

Chromosome:: Chromosome()
{
  taille = 0;
  Genes = 0;
}

Chromosome:: Chromosome(int t, int* T1, int* T2)
{
  taille = t;
  Genes = new Gene[taille];
  std::cout << Genes << '\n';
  for (int i=0; i< taille; i++)
    {
      Genes[i].SetVille(i, T1[i], T2[i]);
    }
}

Chromosome:: Chromosome(const Chromosome& C)
{
  taille = C.taille;
  Genes = new Gene[taille];
  for (int i=0; i< taille; i++)
    {
      Genes[i] = C.Genes[i];
    }
}

Chromosome& Chromosome::operator=(const Chromosome& C)
{
    std::cout << Genes << '\n';
  if (this != &C)
  {
    taille = C.taille;
    std::cout << Genes << '\n'; // POURQUOI FUCK YOU
    delete [] Genes;
    Genes = new Gene[taille];
    for (int i=0;i<taille;i++) Genes[i] = C.Genes[i];
  }
  return *this;
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
