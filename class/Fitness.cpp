#include"Fitness.h"
#include<cmath>

Fitness:: Fitness()
{
  Critere = 0;
  TailleChemin = 0;
}

int* Fitness:: MeilleursChemins(int Crit, int Tail, Population Tab_Pop)
{
  Critere = Crit;
  TailleChemin = Tail;
  int i, j;
  int* Les_Meilleurs;
  if(Crit > Tail)
    {
      return -1;
    }
  Les_Meilleurs = new int[Crit];
  for (i=0;i<Crit;i++)
    {
      Les_Meilleurs[i] = 99999999;      
    }
  Critere = Crit;
  Taille = Tail;
  for(i=Crit; i<Tail; i++)
    {
      if(Tab_Pop[i].GetDistance() < Les_Meilleurs[0])
	{
	  for(j=1; j<Crit; j++)
	    {
	      if(Tab_Pop[i].GetDistance() > Les_Meilleurs[j].GetDistance())
		{
		  Tab_Pop[j - 1] = i;
		  j = Crit + 1;
		}
	    }
	  if (j == Crit)
	    Tab_Pop[Crit - 1] = i;
	}
    }
  return Les_Meilleurs;
}
