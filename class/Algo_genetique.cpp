#include<stdlib.h>
#include<cstdlib>
#include <iostream>
#include "Algo_genetique.h"

void generation_up(Population pop)
{
  Selection_uniforme Selec = Selection_uniforme(100, pop.GetChemin() , 50 );
  Chemin* tempo,tempo1;
  tempo = new Chemin[50];
  tempo1 = new Chemin[50];
  for(int i=0;i<50;i++) tempo[i] = pop[((Selec.GetindChemins())[i])];
  Croisement croise = Croisement(30, 50, 100, tempo);
  for(int i=0;i<50;i++) tempo[i] = croise.Get_Chemins()[i];
  Mutation mut = Mutation(5,50,100,tempo);
  tempo1 = mut.ResultatMutation();
  int ind=0;
  for(int i=0;i<100;i++)
  {
    for(int j=0;j<50;j++)
    {
      if (Selec.GetindChemins()[j] = i)
      {
        pop[i] = tempo1[ind];
        ind++;
        break;
      }
    }
  }

}
