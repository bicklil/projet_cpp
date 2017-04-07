#include"Chemin.h"

Chemin:: Chemin()
{
  nbchemins = 0;
  coordonnees_chemins = 0;
  score = 0;
}

Chemin:: Chemin(int nbc, int* coords_c,int sco)
{
  score = sco;
  if (nbc != nbchemins)
    {
      nbchemins = nbc;
      delete[] coords_c;
      coordonnees_chemins = new Chromosome[nbchemins];
    }
  for (int i=0;i<nbc;i++)
    {
      coordonnees_chemins[i] = coords_c[i];
    }
}

Chemin:: ~Chemin()
{
  delete[] coordonnees_chemins;
}

int Chemin:: GetScore()
{
  return score;
}

void Chemin:: SetScore(int sco)
{
  score = sco;
}
