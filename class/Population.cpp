#include "Population.h"

Population:: Population()
{
  taille = 0;
  generation = 0;
}

Population:: Population(int t, int g)
{
  taille = t;
  generation = g;
}

void Population:: GenerationUp()
{
  generation++;
}
