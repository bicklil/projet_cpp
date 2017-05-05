#include<stdlib.h>
#include<cstdlib>
#include <iostream>
#include "Algo_genetique.h"

void generation_up(Population pop)
{
  int nbfaible = 100;
  Selection_par_rang Selec = Selection_par_rang(100, pop , nbfaible );
  Chemin* tempo,*tempo1;
  tempo = new Chemin[nbfaible];
  tempo1 = new Chemin[nbfaible];
  for(int i=0;i<nbfaible;i++) tempo[i] = pop[(Selec.GetindChemins()[i])];
  Croisement croise = Croisement(50, nbfaible, 100, tempo);
  for(int i=0;i<nbfaible;i++) tempo[i] = croise.Get_Chemins()[i];
  Mutation mut = Mutation(1,10,nbfaible,100,tempo);
  tempo1 = mut.ResultatMutation();
  int ind=0;
  for(int i=0;i<100;i++)
  {
    for(int j=0;j<nbfaible;j++)
    {
      if (Selec.GetindChemins()[j] == i)
      {
        pop[i] = tempo1[ind];
        ind++;
        break;
      }
    }
  }

}
