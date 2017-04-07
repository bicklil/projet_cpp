#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ECART_MINI 50
#define X_TAILLE 800
#define Y_TAILLE 600

using namespace std;

int* init_ville(int);
void position_ville(int*, int);
bool test_dist_mini(int*, int , int , int );
double calcul_distance(int ,int ,int ,int );
int** creation_matrice_distance(int*, int);
