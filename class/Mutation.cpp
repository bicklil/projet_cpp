#include "Mutation.h"
#include <time.h>
#include <cstdlib>

Mutation:: Mutation()
{
  nbChTouche = 0;
  nbMutations = 0;
  CheminsAMuter = 0;
  nbChemins = 0;
  tailleChemins = 0;
}

Mutation:: Mutation(int nMut,int ntuch, int nChem, int tChem, Chemin* Cam)
{
  nbMutations = nMut;
  nbChTouche = ntuch;
  nbChemins = nChem;
  tailleChemins = tChem;
  CheminsAMuter = new Chemin[nChem];
  for (int i=0;i<nChem;i++) CheminsAMuter[i] = Cam[i];
}

Mutation:: ~Mutation()
{
  delete[] CheminsAMuter;
}

Chemin* Mutation:: ResultatMutation()
{
  int hasard1, hasard2, passage;
  int* Chem;
  int ind;
  //srand(time(NULL));
  for (int j=0; j<nbChTouche; j++)
    {
      ind = rand()%(nbChemins);
      Chem = CheminsAMuter[ind].GetChemin();
      for(int k=0; k<nbMutations; k++)
    	{
    	  hasard1 = 1 + rand()%(nbChemins-1);
    	  hasard2 = 1 + rand()%(nbChemins-1);
    	  passage = Chem[hasard1];
    	  Chem[hasard1] = Chem[hasard2];
    	  Chem[hasard2] = passage;
    	}
    }
  return CheminsAMuter;
}
