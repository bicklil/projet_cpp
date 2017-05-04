#include"Fitness.h"
#include<cmath>
#include <iostream>

Fitness:: Fitness()
{
  Critere = 0;
  TailleChemin = 0;
}

Fitness:: Fitness(int C, int T)
{
  Critere = C;
  TailleChemin = T;
}

void Fitness::DecalageaGauche(int* T, int taille)
{
  for(int i=0;i<taille;i++)
    {
      T[i]=T[i+1];
    }
}

void Fitness::MeilleursChemins(Population Pop, int* Les_Meilleurs)
{
  int tempo[TailleChemin],j;
  for(int i=0;i<TailleChemin;i++) tempo[i] = i;
  double dist;

  for(int i=0;i<TailleChemin;i++)
  {
    dist = Pop[i].GetDistance();
    for(j=i; j>0 && Pop[tempo[j-1]].GetDistance() > dist; j--)
    {
      tempo[j] = tempo[j-1];
    }
    tempo[j] = i;
  }

  for(int i=0;i<Critere;i++) Les_Meilleurs[i]= tempo[i];
}

void Fitness::PiresChemins(Population Pop, int* Les_Meilleurs)
{
  int tempo[TailleChemin],j;
  for(int i=0;i<TailleChemin;i++) tempo[i] = i;
  double dist;

  for(int i=0;i<TailleChemin;i++)
  {
    dist = Pop[i].GetDistance();
    for(j=i; j>0 && Pop[tempo[j-1]].GetDistance() < dist; j--)
    {
      tempo[j] = tempo[j-1];
    }
    tempo[j] = i;
  }

  for(int i=0;i<Critere;i++) Les_Meilleurs[i]= tempo[i];
}
