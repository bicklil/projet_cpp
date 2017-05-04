#include "Selection_par_rang.h"
#include <cstdlib>
#include <iostream>

Selection_par_rang :: Selection_par_rang(int nombrec, Population Pop, int nbel): Selection(nbel)
{
  nbelus = nbel;
  Fitness fit(nombrec-nbelus,nombrec);
  int* chem = this->GetindChemins();
  int* chem_temp = new int[nbel];
  fit.MeilleursChemins(Pop, chem_temp);
  bool test = true;
  int passage = 0;
  for(int i=0;i<nombrec;i++)
  {
    test = true;
    for(int j=0;j<nombrec-nbelus;j++)
    {
      if (i == chem_temp[j])
      {
        test = false;
        break;
      }
    }
    if (test)
    {
      chem[passage] = i;
      passage++;
    }
  }

}
