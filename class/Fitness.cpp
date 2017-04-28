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
  int passage;
  for(int i=0;i<taille-1;i++)
    {
      T[i]=T[i+1];
    }
}

int* Fitness:: MeilleursChemins(int Crit, int Tail, Population Tab_Pop)
{
  Critere = Crit;
  TailleChemin = Tail;
  int i, j;
  int* Les_Meilleurs;
  if(Crit > Tail)
    {
      return 0;
    }
  Les_Meilleurs = new int[Crit];
  for (i=0;i<Crit;i++)
    {
      for(j=0;j<i;j++)
	{
	  if (Tab_Pop[Les_Meilleurs[j]].GetDistance() < Tab_Pop[Les_Meilleurs[i]].GetDistance())
	  this->DecalageaGauche(Les_Meilleurs, j);
	  Les_Meilleurs[j] = i;
	}
    }
  Critere = Crit;
  TailleChemin = Tail;
  for(i=Crit; i<Tail; i++)
    {
      if(Tab_Pop[i].GetDistance() < Tab_Pop[Les_Meilleurs[0]].GetDistance())
	{
	  for(j=1; j<Crit; j++)
	    {
	      if(Tab_Pop[i].GetDistance() > Tab_Pop[Les_Meilleurs[j]].GetDistance())
		{
		  this->DecalageaGauche(Les_Meilleurs, j);
		  Les_Meilleurs[j - 1] = i;
		  j = Crit + 1;
		}
	    }
	  if (j == Crit)
	    {
	      this->DecalageaGauche(Les_Meilleurs, j);
	      Les_Meilleurs[Crit - 1] = i;
	    }
	}
    }
  return Les_Meilleurs;
}
