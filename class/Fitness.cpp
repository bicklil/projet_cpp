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

int* Fitness:: MeilleursChemins(Population Tab_Pop)
{

  int i, j;
  int* Les_Meilleurs;
  Les_Meilleurs = new int[Critere];
  for (i=0;i<Critere;i++)
    {
      Les_Meilleurs[i] = i;
    }

  for(i=Critere; i<TailleChemin; i++)
    {
      if(Tab_Pop[i].GetDistance() < Tab_Pop[Les_Meilleurs[0]].GetDistance())
	{
	  for(j=1; j<Critere; j++)
	    {
	      if(Tab_Pop[i].GetDistance() > Tab_Pop[Les_Meilleurs[j]].GetDistance())
		{
		  Les_Meilleurs[j - 1] = i;
		  j = Critere + 1;
		}
	    }
	  if (j == Critere)
	    Les_Meilleurs[Critere - 1] = i;
	}
    }
  return Les_Meilleurs;
}
