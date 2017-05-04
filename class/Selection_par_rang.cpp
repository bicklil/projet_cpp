#include "Selection_par_rang.h"
#include <cstdlib>
#include <iostream>

Selection_par_rang :: Selection_par_rang(int nombrec, Population Pop, int nbel): Selection(nbel)
{
  nbelus = nbel;
  int val,somme;
  Fitness fit(nbelus,nombrec);
  int* chem = this->GetindChemins();
  int* chem_temp = new int[nbel];
  fit.PiresChemins(Pop, chem_temp);

  somme = (nbelus* (nbelus-1)/2);
  for(int i=0;i<nbelus;i++)
  {
    val = rand()%somme;
    for(int j=0;j<nbelus;j++)
    {
      val = val -j;
      if (val <= 0)
      {
        chem[i] = chem_temp[j];
        break;
      }
    }
  }
}
