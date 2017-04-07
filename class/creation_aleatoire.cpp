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
  return map;
}

void position_ville(int* map, int nbrEffectue)
{
  bool test = false;
  int x,y;
  while (not test)
  {
    x = rand() % X_TAILLE ;
    y = rand() % Y_TAILLE ;
    test = test_dist_mini(map, nbrEffectue, x, y);
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
  return sqrt( pow(x1-x2,2) + ( pow(y1-y2,2) ));
}

int** creation_matrice_distance(int* tab, int taille){
  int** matrice = new int*[taille];
  for (int i=0; i<taille; i++)
  {
    matrice[i] = new int[taille]
    for(int j=0; j<taille; j++)
    {
      if (i!=j)
        matrice[i][j] = calcul_distance(tab[2*i],tab[(2*i)+1],tab[(2*j)],tab[(2*j)+1]);
      else
        matrice[i][i] = 0;
    }
  }
  return matrice;
}
