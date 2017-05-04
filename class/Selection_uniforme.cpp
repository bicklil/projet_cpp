#include "Selection_uniforme.h"
#include <cstdlib>

Selection_uniforme :: Selection_uniforme(int nombrec, Chemin * Chemins, int nbel): Selection(nbel)
{
  int j = 0,ind;
  bool test = true;
  nbelus = nbel;
  int* chem = this->GetindChemins();

  while (j<nbelus)
  {
    test =true;
    ind = rand()%nombrec;
    for(int i=0;i<j;i++)
    {
      if (chem[i] == ind)
      {
        test = false;
        break;
      }
    }

    if (test)
    {
      chem[j] = ind;
      j++;
    }
  }

}
