#include"Fitness.h"
#include<cmath>

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
  for(int i=0;i<taille-1;i++)
    {
      T[i]=T[i+1];
    }
}

int* Fitness:: MeilleursChemins(Population Tab_Pop)
{
  int i, j;
  int* Les_Meilleurs;
  if(Critere > TailleChemin)
    {
      return 0;
    }
  Les_Meilleurs = new int[Critere];
  for (i=0;i<Critere;i++)
    {
      for(j=0;j<i;j++)
	{
	  if (Tab_Pop[Les_Meilleurs[j]].GetDistance() < Tab_Pop[Les_Meilleurs[i]].GetDistance())
	  this->DecalageaGauche(Les_Meilleurs, j);
	  Les_Meilleurs[j] = i;
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
		  this->DecalageaGauche(Les_Meilleurs, j);
		  Les_Meilleurs[j - 1] = i;
		  j = Critere + 1;
		}
	    }
	  if (j == Critere)
	    {
	      this->DecalageaGauche(Les_Meilleurs, j);
	      Les_Meilleurs[Critere - 1] = i;
	    }
	}
    }
  return Les_Meilleurs;
}
