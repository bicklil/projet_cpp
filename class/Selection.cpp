#include "Selection.h"

Selection:: Selection()
{
  nombre = 0;
  TailleChemin = NULL;
  ListeChemin = NULL;
}

Selection:: Selection(int nombre, int * taillec, int ** Listec)
{
  TailleChemin = new int[nombre];
  for (int i=0; i<nombre; i++)
    {
      TailleChemin[i] = taillec[i];
    }
  for (int i=0; i<nombre; i++)
    {
      ListeChemin[i] = new int[TailleChemin[i]];
      for (int j=0; j<TailleChemin[i]; j++)
	{
	  ListeChemin[i][j] = Listec[i][j];
	}
    }
}

Selection:: ~Selection()
{
  delete[] ListeChemin;
  delete[] TailleChemin;
}
