#ifndef algo_genetique
#define algo_genetique
#include "Chemin.h"
#include "cng.h"
#define VILLES 100
#define ECART_MINI 30
#define NbChemins 10

void dessin(void);
void Tableau_aleatoire(int, int, int, int, int, int*, int*);
bool test_dist_mini(int*, int*, int , int , int );
double Calcul_distance(int ,int ,int ,int );
#endif
