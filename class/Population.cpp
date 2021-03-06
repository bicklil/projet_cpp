#include "Population.h"
#include <math.h>
#include "Algo_genetique.h"
#include <iostream>
using namespace std;

double calcul_distance(int x1,int y1,int x2,int y2)
{
  return sqrt(pow(x1-x2,2) +(pow(y1-y2,2)));
}

Population:: Population()
{
  taille = 0;
  generation = 0;
  listeChemin = 0;
}

Population:: Population(int t, int nbv, int* T1, int* T2, int NV1, int NV2, double dist)
{
  taille = t;
  generation = 0;
  listeChemin = new Chemin[t];
  for(int i=0;i<t;i++)
  {
    listeChemin[i] = Chemin(nbv, T1, T2, NV1, NV2, 0);
  }
}

void Population:: GenerationUp()
{
  generation++;
  generation_up(*this);
}

Chemin& Population::operator[](int ind)
{
  return listeChemin[ind];
}

void Population::actu_distance()
{
  Gene* TabGenes;
  Gene G1,G2;
  double distance_chemin;
  for(int i=0;i<taille;i++)
  {
    distance_chemin = 0;
    TabGenes = (*this)[i].GetGene();
    for(int j=0; j<(*this)[i].Getnbvilles()-1; j++)
      {
      //  std::cout << TabGenes[(*this)[i].GetChemin()[j]].GetY() << '\n';
        G1 = TabGenes[((*this)[i].GetChemin())[j]];
        G2 = TabGenes[((*this)[i].GetChemin())[j + 1]];
	distance_chemin += calcul_distance(G1.GetX(), G1.GetY(), G2.GetX(), G2.GetY());
      }
    this->operator[](i).SetDistance(distance_chemin);
  }
}

Chemin* Population::GetChemin()
{
  return listeChemin;
}

int Population::GetGeneration()
{
  return generation;
}
