#include"Chemin.h"
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <random>
#include <chrono>
#include<unistd.h>

Chemin:: Chemin()
{
  nbvilles = 0;
  distance = 0;
  LeChemin = 0;
  numville1 = 0;
  numville2 = 0;
}

// Remplit le tableau LeChemin avec le numero de toutes les villes constituant
// le chemin dans un certain ordre avec NV1 le numero de la ville de depart et
// NV2 le numero de la ville d'arrivée.
Chemin:: Chemin(int nbv, int* T1, int* T2, int NV1, int NV2, double dist):Chromosome(nbv, T1, T2)
{
  std::random_device rd;
  std::mt19937 random(rd());
  // Pour generer un chemin au hasard, il faut inverser les position du tableau.
  // D'où l'existence de ces variables.
  int hasard1, hasard2, passage = 0;
  nbvilles = nbv;
  distance = dist;
  LeChemin = new int[nbv];
  // Génère une série de numéro désignant les villes, le premier élément de la
  // liste est la première ville, le dernier élément la dernière ville.
  LeChemin[0] = NV1;
  for (int i=1;i<nbv;i++)
    {
      if (i == NV1)
    	{
    	  passage--;
    	}
      else if (i == NV2)
    	{
    	  passage--;
    	}
      else
      {
    	LeChemin[i+passage] = i;
      }
    }
  LeChemin[nbv - 2] = 0;
  LeChemin[nbv - 1] = NV2;
  // Génération du chemin aléatoire partant d'une ville à une autre en
  // inversant les positions d'un tableau exception faite des deux extremites
  // du chemin.
  for (int j=0; j<200; j++)
    {
      hasard1 = (int)(1 + (random()%(nbv-1)));
      hasard2 = (int)(1 + (random()%(nbv-1)));
      passage = LeChemin[hasard1];
      LeChemin[hasard1] = LeChemin[hasard2];
      LeChemin[hasard2] = passage;
    }
}

Chemin:: ~Chemin()
{
  delete[] LeChemin;
}

Chemin:: Chemin(const Chemin& C):Chromosome(C)
{
  nbvilles = C.nbvilles;
  distance = C.distance;
  numville1 = C.numville1;
  numville2 = C.numville2;
  LeChemin = new int[nbvilles];
  for(int i=0;i<nbvilles;i++)
    {
      LeChemin[i] = C.LeChemin[i];
    }
}

double Chemin:: GetDistance()
{
  return distance;
}

void Chemin:: SetDistance(double dist)
{
  distance = dist;
}

int Chemin:: Getnbvilles()
{
  return nbvilles;
}

int* Chemin:: GetChemin()
{
  return LeChemin;
}

Chemin& Chemin::operator=(const Chemin& C)
{
  if (this != &C)
  {
    this->Chromosome::operator=(C);
    nbvilles = C.nbvilles;
    distance = C.distance;
    numville1 = C.numville1;
    numville2 = C.numville2;
    if (LeChemin != 0)
      delete [] LeChemin;
    LeChemin = new int[C.nbvilles];
    for(int i=0;i<C.nbvilles;i++)
      {
        LeChemin[i] = C.LeChemin[i];
      }
  }
  return *this;
}
