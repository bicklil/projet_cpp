#include<stdlib.h>
#include<cstdlib>
#include"Algo_genetique.h"
#include"cng.h"
#define TAILLE 10

bool la_bool = true;

int* Tableau_aleatoire(int min, int max, int taille)
{
  int* T;
  T = new int[taille];
  for(int i=0;i<taille;i++)
    {
      // Initialise une valeur comprise entre min et max dans le tableau.
      T[i] = min + (rand() % (max - min));
    }
  return T;
}

void dessin(void){
  if(la_bool){
    // Tableau contenant les coordonnées x des villes.
    int *T1 = Tableau_aleatoire(1, 800, TAILLE);
    // Tableau contenant les coordonnées y des villes.
    int *T2 = Tableau_aleatoire(1, 600, TAILLE);
    // Population de 100, première génération.
    Chromosome Population(TAILLE, T1, T2);
    cng_current_color(255, 0, 0);
    for(int i=0; i<TAILLE; i++) cng_circle(Population.GetGene()[i].GetX(), Population.GetGene()[i].GetY(), 3);
    cng_swap_screen();
    la_bool= false;
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
