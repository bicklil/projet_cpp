#include "creation_aleatoire.h"

int* init_ville(int nbrVille)
{
  int nbrEffectue = 0;
  int* map = new int[nbrVille*2];
  srand(time(NULL));

  while (nbrVille - nbrEffectue > 0)
  {
    position_ville(map, nbrEffectue);
    nbrEffectue++;
  }
}

void position_ville(int* map, int nbrEffectue)
{
  bool test = False;
  while (not test)
  {
    int x = rand() % X_TAILLE ;
    int y = rand() % Y_TAILLE ;
    test = test_dist_mini(map, nbrEffectue, x, y)
  }
  map[2*nbrEffectue] = x;
  map[(2*nbrEffectue)+1] = y;
}

bool test_dist_mini(int* map, int nbrEffectue, int x, int y)
{
  for(int i=0; i<nbrEffectue; i++)
  {
    if (calcul_distance(x,y,map[2*i],map[(2*i)+1]) < ECART_MINI)
    {
      return false;
    }
  }
  return true;
}

double calcul_distance(int x1,int y1,int x2,int y2)
{
  return math.sqrt((x1**2 - x2**2)+(y1**2 - y2**2))
}
