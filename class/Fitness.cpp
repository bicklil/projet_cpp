#include"Fitness.h"
#include<cmath>

Fitness:: Fitness()
{
  DistanceCalculee = 0;
}

Fitness:: Fitness(int DC)
{
  DistanceCalculee = DC;
}

int Fitness:: GetDistance(Chemin& C)
{
  int distance = 0;
  int nbv = C.Getnbvilles();
  Chromosome* cv  = C.GetCoords();
  /*
  for (int i=0; i<nbv-1;i++)
    {
      distance += sqrt(pow(fabs(cv[i].(GetPos_X()) - cv[i+1].GetPos_X()), 2.0) + pow(fabs(cv[i].GetPos_Y() - cv[i+1].GetPos_Y()), 2.0));
      }*/
  delete[] cv;
  return distance;
}
