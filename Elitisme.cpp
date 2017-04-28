#include"Elitisme.h"

Elitisme:: Elitisme()
{
  ChromosomeElites = 0;
  nbElites = 0;
}

Elitisme:: Elitisme(int nE, int* CE)
{
  ChromosomeElites = CE;
  nbElites = nE;
}

Elitisme:: ~Elitisme()
{
  delete[] ChromosomeElites;
}
