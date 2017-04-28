#include "Mutation.h"
#include <time.h>
#include <cstdlib>

Mutation:: Mutation()
{
  nbMutations = 0;
  CheminsAMuter = 0;
  nbChemins = 0;
  tailleChemins = 0;
}

Mutation:: Mutation(int nMut, int nChem, int tChem, Chemin* Cam)
{
  nbMutations = nMut;
  CheminsAMuter = Cam;
  nbChemins = nChem;
  tailleChemins = tChem;
}

Mutation:: ~Mutation()
{
  delete[] CheminsAMuter;
}

Chemin* Mutation:: ResultatMutation()
{
  int hasard1, hasard2, passage;
  int* Chem;
  srand(time(NULL));
  for (int j=0; j<nbChemins; j++)
    {
      Chem = CheminsAMuter[j].GetChemin();
      for(int k=0; k<nbMutations; k++)
	{
	  hasard1 = 1 + rand()%(nbChemins-1);
	  hasard2 = 1 + rand()%(nbChemins-1);
	  passage = Chem[hasard1];
	  Chem[hasard1] = Chem[hasard2];
	  Chem[hasard2] = passage;
	}
    }
  return 0;
}
