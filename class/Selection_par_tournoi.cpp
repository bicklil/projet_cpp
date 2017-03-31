#include "Selection_par_tournoi.h"

Selection_par_tournoi :: Selection_par_tournoi(int nombre, int * taillec, int ** Listec, int nbelus): Selection(nombre, taillec, Listec)
{
  // La variable qui nous permettra d'identifier les differents chemins.
  int a = 1;
  int j = 0;
  while (j<nombre-nbelus)
    {
      for (int i=0; i<nombre;i += 2 * a)
	{
	  if (taillec[i] > taillec[i + a])
	    {
	      taillec[i] = taillec[i + a];
	    }
	  j++;
	  if (j >= nombre - nbelus)
	    {
	      i = nombre;
	    }
	}
      a *= 2;
    }
}
