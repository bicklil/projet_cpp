#ifndef population
#define population

#include "Chemin.h"

class Population
{
 private:
  int taille;
  int generation;
  Chemin* listeChemin;
 public:
  Population();
  Population(int, int, int* , int*, int , int , double);
  void GenerationUp();
  Chemin operator[](int);
  void actu_distance();
};

#endif