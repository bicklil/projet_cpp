#include "Selection_roulette.h"
#include <cstdlib>
Selection_roulette:: Selection_roulette():Selection()
{
  probabilite = 0;
}

Selection_roulette:: Selection_roulette(int nombrec, Chemin* Listec, float proba, int nbelus): Selection(nombrec, Listec)
{
  // Nombre de non elus.
  int nbnel=0;
  int max=0;
  int sco;
  float chance;
  for (int i=0; i<nombrec; i++)
    {
      sco = Listec[i].GetScore();
      if (sco > max)
	{
	  max = sco;
	}
    }
  while (nbnel < nbelus)
    {
      for(int i=0; i<nombrec; i++)
	{
	  chance = rand() * ( Listec[i].GetScore() / (max + 1));
	  if (chance > proba)
	    {
	      Listec;
	      nbnel ++;
	    }
	}
    }
}
