#include "Selection.h"
#include "Chemin.h"

Selection:: Selection()
{
  NombreChemins = 0;
  Chemins = 0;
}

Selection:: Selection(int nombre)
{
  NombreChemins = nombre;
  Chemins = new int[NombreChemins];
  for (int i=0;i<NombreChemins;i++) Chemins[i] = -1;
}

Selection:: ~Selection()
{
  delete[] Chemins;
}

int Selection:: GetNombreChemins()
{
  return NombreChemins;
}

int* Selection:: GetindChemins()
{
  return Chemins;
}
