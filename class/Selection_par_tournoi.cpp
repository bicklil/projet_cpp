#include "Selection_par_tournoi.h"

Selection_par_tournoi :: Selection_par_tournoi(int nombrec, Chemin * Chemins, int nbel): Selection(nbel)
{
  // La variable qui nous permettra d'identifier les differents chemins.
  int a = 1;
  int j = 0;
  int challenger1;
  int challenger2;
  nbelus = nbel;
  while (j<nbelus)
    {
      for (int i=0; i<nombrec;i += 2 * a)
    	{
    	  challenger1 = Chemins[i].GetDistance();
    	  challenger2 = Chemins[i + a].GetDistance();
    	  if (challenger1 > challenger2)
    	    {
    	      Chemins[i].SetDistance(challenger2);
    	    }
    	  Chemins[i + a].SetDistance(0);
    	  j++;
    	  if (j >= nombrec - nbelus)
  	    {
  	      i = nombrec;
  	    }
    	}
      a *= 2;
    }
}
