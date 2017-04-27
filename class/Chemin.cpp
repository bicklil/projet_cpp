#include"Chemin.h"
#include <cstdlib>

Chemin:: Chemin()
{
  nbvilles = 0;
  score = 0;
  LeChemin = 0;
  numville1 = 0;
  numville2 = 0;
}

// Remplit le tableau LeChemin avec le numero de toutes les villes constituant
// le chemin dans un certain ordre avec NV1 le numero de la ville de depart et
// NV2 le numero de la ville d'arrivée.
Chemin:: Chemin(int nbv, int* T1, int* T2, int NV1, int NV2, int sco):Chromosome(nbv, T1, T2)
{
  // Pour generer un chemin au hasard, il faut inverser les position du tableau.
  // D'où l'existence de ces variables.
  int hasard1, hasard2, passage = 0;
  score = sco;
  LeChemin = new int[nbv];
  // Génère une série de numéro désignant les villes, le premier élément de la
  // liste est la première ville, le dernier élément la dernière ville.
  LeChemin[0] = NV1;
  for (int i=1;i<nbv;i++)
    {
      if (i == NV1)
    	{
    	  //i++;
    	  passage--;
    	}
      else if (i == NV2)
    	{
    	  //i++;
    	  passage--;
    	}
      else
      {
    	LeChemin[i+passage] = i;
      }
    }

  LeChemin[nbv - 1] = NV2;
  // Génération du chemin aléatoire partant d'une ville à une autre en
  // inversant les positions d'un tableau exception faite des deux extremites
  // du chemin.
  for (int j=0; j<200; j++)
    {
      hasard1 = 1 + rand()%(nbv-1);
      hasard2 = 1 + rand()%(nbv-1);
      passage = LeChemin[hasard1];
      LeChemin[hasard1] = LeChemin[hasard2];
      LeChemin[hasard2] = passage;
    }
}

Chemin:: ~Chemin()
{
  delete[] LeChemin;
}

Chemin:: Chemin(const Chemin& C)
{
  nbvilles = C.nbvilles;
  score = C.score;
  numville1 = C.numville1;
  numville2 = C.numville2;
  for(int i=0;i<nbvilles;i++)
    {
      LeChemin[i] = C.LeChemin[i];
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

int* Chemin:: GetChemin()
{
  return LeChemin;
}
