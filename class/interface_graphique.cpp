#include<stdlib.h>
#include<cstdlib>
#include<time.h>
#include<math.h>
#include"interface_graphique.h"
#include"cng.h"
#include<unistd.h>
#include<iostream>
using namespace std;

int nb_chemins = 0;
int nb_generations = 0;
// La première et la dernière ville du chemin.
static int Nville1, Nville2;
// Tableaux contenant les coordonnées x et y des villes.
static int *T1, *T2;
int BestChemins[3] = {1, 2, 3};

double Calcul_distance(int x1,int y1,int x2,int y2)
{
  return sqrt(pow(x1-x2,2) +(pow(y1-y2,2)));
}

// Si la distance dépasse un certain ecart, retourne faux.
bool test_dist_mini(int* mapx, int* mapy, int nbrEffectue, int x, int y)
{
  for(int i=0; i<nbrEffectue; i++)
  {
    if (Calcul_distance(x,y,mapx[i],mapy[i]) < ECART_MINI)
    {
      return false;
    }
  }
  return true;
}



void Tableau_aleatoire(int minx, int maxx, int miny, int maxy, int taille, int* Tx, int* Ty)
{
  bool ecart_ver;
  srand(time(NULL));
  for(int i=0;i<taille;i++)
    {
      // Initialise une valeur comprise entre min et max dans le tableau.
      Tx[i] = minx + (rand() % (maxx - minx));
      Ty[i] = miny + (rand() % (maxy - miny));
      ecart_ver = true;
      for(int j=0;j<i;j++)
	{
	ecart_ver = test_dist_mini(Tx, Ty, j, Tx[i], Ty[i]);
	if (ecart_ver == false)
	  {
	    j = 0;
	    Tx[i] = minx + (rand() % (maxx - minx));
	    Ty[i] = miny + (rand() % (maxy - miny));
	  }
	}
    }
}

void dessin(void){
  if (nb_chemins == 0){
    srand(time(NULL));
    Nville1 = 1 + rand()%VILLES;
    Nville2 = 1 + rand()%VILLES;
    while(Nville1 == Nville2)
      {
	         Nville2 = 1 + rand()%VILLES;
      }
    T1 = new int[VILLES];
    T2 = new int[VILLES];
    Tableau_aleatoire(1, 800, 1, 600, VILLES, T1, T2);
  }
  if(nb_chemins < NbChemins){
    int nbrInd = 100;
    int color[9] = {0,255,0,0,0,100,255,0,0};
    Fitness fit(3,VILLES);
    //BestChemins = new int[3];
    Gene* TabGenes;
    Gene G1, G2;
    //double distance_chemin = 0;
    // Population de taille VILLES, première génération.
    // Génération d'un chemin partant de la ville portant le numéro Nville1
    // et finissant dans la ville numéro Nville2.
    Population Pop(nbrInd, VILLES, T1, T2, Nville1, Nville2, 0);
    Pop.actu_distance();
    //int i = 0;
    fit.MeilleursChemins(Pop, BestChemins);
    for(int k=0;k<3;k++)
    {
      // Recupere le tableau des gènes.
      TabGenes = Pop[BestChemins[k]].Chromosome::GetGene();
      cng_current_color(255, 0, 0);
      // Dessine de jolis cercles.
      for(int i=0; i<VILLES; i++) cng_circle(TabGenes[i].GetX(), TabGenes[i].GetY(), 6);
      for(int j=0; j<VILLES-1; j++)
        {
	  G1 = TabGenes[Pop[BestChemins[k]].GetChemin()[j]];
	  G2 = TabGenes[Pop[BestChemins[k]].GetChemin()[j + 1]];
	  cng_current_color(color[k * 3],color[k * 3 + 1],color[k * 3 + 2]);
	  cng_line(G1.GetX(),G1.GetY(),G2.GetX(),G2.GetY());
	}
      cout << Pop[BestChemins[k]].GetDistance() << endl;
    }
    //delete[] BestChemins;
    usleep(1000000);
    nb_chemins ++;
    cng_swap_screen();
    cng_clear_screen();
  }
  else
    {
      delete[] T1;
      delete[] T2;
    }
}

// Initialisation de l'algorithme génétique.
int main(int argc, char* argv[])
{
  // Comme ça il n'y a plus le warning:
  // deprecated conversion from string constant to ‘char*’ [-Wwrite-strings]
  // Comme c'est une variable locale pas besoin de faire delete[] titre après.
  char titre[35] = "la fenetre du voyageur de commerce";
  cng_init_window(&argc, argv, titre, 800, 600);
  cng_display_func(dessin);
  cng_clear_screen();
  cng_main_loop();
  cng_destroy_window();
}
