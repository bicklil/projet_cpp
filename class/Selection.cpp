#include "Selection.h"
#include "Chemin.h"

Selection:: Selection()
{
  NombreChemins = 0;
  Chemins = 0;
}

Selection:: Selection(int nombre, Chemin * chemins)
{
  Chemins = new Chemin[NombreChemins];
  for (int i=0; i<nombre; i++)
    {
      Chemins[i] = chemins[i];
    }
}

Selection:: ~Selection()
{
  delete[] Chemins;
}

int Selection:: GetNombreChemins()
{
  return NombreChemins;
}
