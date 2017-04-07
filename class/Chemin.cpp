#include"Chemin.h"

Chemin:: Chemin()
{
  nbvilles = 0;
  coordonnees_villes = 0;
  score = 0;
}

Chemin:: Chemin(int nbv, Chromosome* coords_v,int sco)
{
  score = sco;
  if (nbv != nbvilles)
    {
      nbvilles = nbv;
      delete[] coordonnees_villes;
      coordonnees_villes = new Chromosome[nbvilles];
    }
  for (int i=0;i<nbv;i++)
    {
      coordonnees_villes[i] = coords_v[i];
    }
}

Chemin:: ~Chemin()
{
  delete[] coordonnees_villes;
}

Chemin:: Chemin(const Chemin& C)
{
  nbvilles = C.nbvilles;
  score = C.score;
  for(int i=0;i<nbvilles;i++)
    {
      coordonnees_villes[i] = C.coordonnees_villes[i];
    }
}

int Chemin:: GetScore()
{
  return score;
}

void Chemin:: SetScore(int sco)
{
  score = sco;
}

int Chemin:: Getnbvilles()
{
  return nbvilles;
}

Chromosome* Chemin::GetCoords()
{
  return coordonnees_villes;
}
