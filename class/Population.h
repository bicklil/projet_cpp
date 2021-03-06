#ifndef population
#define population

#include "Chemin.h"
#include <math.h>
class Population
{
 private:
  int taille;
  int generation;
  Chemin* listeChemin;
 public:
  Population();
  Population(int, int, int* , int*, int , int , double);
  Chemin* GetChemin();
  void GenerationUp();
  Chemin& operator[](int);
  void actu_distance();
  int GetGeneration();  
};

#endif
