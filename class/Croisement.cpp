#include"Croisement.h"
#include <cstdlib>

Croisement::Croisement()
{
  ptCroisement = 0;
  tailleChemins = 0;
  LesChemins = 0;
  tailleChem = 0;
}

Croisement::Croisement(int ptC,int tC, int tCs, Chemin* Chem)
{
  ptCroisement = ptC;
  tailleChem = tC;
  tailleChemins = tCs;
  LesChemins = Chem;
}

Croisement::~Croisement()
{
  delete[] LesChemins;
}

void Croisement::Modification_ptCroisement()
{
  ptCroisement = rand() % tailleChemins;
}
void Croisement::Execution_Croisement()
{
  // Il nous faut échanger deux villes pour effectuer un croisement;
  // imaginons qu'il n'y en ait qu'une seule, dans ce cas les chemins se
  // retrouveront avec deux fois les mêmes villes et avec une ville en manque.
  int* Chemin1,* Chemin2;
  int ville1, ville2;
  for(int j=0;j<tailleChem;j = j*2)
  {
    this->Modification_ptCroisement();
    Chemin1 = LesChemins[j].GetChemin();
    Chemin2 = LesChemins[j+1].GetChemin();
    ville1 = Chemin1[ptCroisement];
    ville2 = Chemin2[ptCroisement];
    for(int i=1; i<tailleChemins-1;i++)
      {
        if (ville1 == Chemin2[i])
  	Chemin2[i] = ville2;
        if (ville2 == Chemin1[i])
  	Chemin1[i] = ville1;
      }
    Chemin2[ptCroisement] = ville1;
    Chemin1[ptCroisement] = ville2;
  }
}

Chemin* Croisement::Get_Chemins()
{
  return LesChemins;
}
