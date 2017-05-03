#include"Fitness.h"
#include<cmath>
#include <iostream>

Fitness:: Fitness()
{
  Critere = 0;
  TailleChemin = 0;
}

Fitness:: Fitness(int C, int T)
{
  Critere = C;
  TailleChemin = T;
}

void Fitness::DecalageaGauche(int* T, int taille)
{
  for(int i=0;i<taille;i++)
    {
      T[i]=T[i+1];
    }
}

void Fitness:: MeilleursChemins(Population Tab_Pop, int* Les_Meilleurs)
{
  int i, j;
  for (i=0;i<Critere;i++) Les_Meilleurs[i] = i;
  for (i=1;i<Critere;i++)
    {
      for(j=0;j<i;j++)
    	{
    	  if (Tab_Pop[Les_Meilleurs[j]].GetDistance() > Tab_Pop[Les_Meilleurs[i]].GetDistance())
	    {
	      this->DecalageaGauche(Les_Meilleurs, j - 1);
	      Les_Meilleurs[j - 1] = i;
	      j = i;
	    }
	  else if ((j == i-1) and (Tab_Pop[Les_Meilleurs[j]].GetDistance() < Tab_Pop[Les_Meilleurs[i]].GetDistance()))
	    {
	      this->DecalageaGauche(Les_Meilleurs, j);
	      Les_Meilleurs[j] = i;
	      j = i;
	    }
    	}
    }
  for(i=Critere; i<TailleChemin; i++)
    {
      if(Tab_Pop[i].GetDistance() < Tab_Pop[Les_Meilleurs[0]].GetDistance())
	{
	  for(j=1; j<Critere; j++)
	    {
	      if(Tab_Pop[i].GetDistance() > Tab_Pop[Les_Meilleurs[j]].GetDistance())
		{
		  this->DecalageaGauche(Les_Meilleurs, j - 1);
		  Les_Meilleurs[j - 1] = i;
		  j = Critere;
		}
	      else if (j==Critere-1)
		{
		  this->DecalageaGauche(Les_Meilleurs, j);
		  Les_Meilleurs[j] = i;
		  j ++;
		}
	    }
	}
    }
}
