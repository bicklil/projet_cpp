#include<stdlib.h>
#include<cstdlib>
#include"Algo_genetique.h"
#include"cng.h"
#define VILLES 100

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
    // La première et la dernière ville du chemin.
    int Nville1, Nville2;
    // Contient le chemin.
    int * Chem;
    Nville1 = 1 + rand()%VILLES;
    Nville2 = 1 + rand()%VILLES;
    while(Nville1 == Nville2)
      Nville2 = 1 + rand()%VILLES;
    // Tableau contenant les coordonnées x des villes.
    int *T1 = Tableau_aleatoire(1, 800, VILLES);
    // Tableau contenant les coordonnées y des villes.
    int *T2 = Tableau_aleatoire(1, 600, VILLES);
    // Population de taille VILLES, première génération.
    // Génération d'un chemin partant de la ville portant le numéro Nville1
    // et finissant dans la ville numéro Nville2.
    Chemin Population(VILLES, T1, T2, Nville1, Nville2, 0);
    Chem = Population.GetChemin();
    cng_current_color(255, 0, 0);
    // Dessine de jolis cercles.
    for(int i=0; i<VILLES; i++) cng_circle(Population.Chromosome::GetGene()[i].GetX(), Population.Chromosome::GetGene()[i].GetY(), 3);
    // Trace des lignes constituant le chemin.
    for(int j=0; j<VILLES-1; j++)
      cng_line(Population.Chromosome::GetGene()[Chem[j]].GetX(),
	       Population.Chromosome::GetGene()[Chem[j]].GetY(),
	       Population.Chromosome::GetGene()[Chem[j + 1]].GetX(),
	       Population.Chromosome::GetGene()[Chem[j + 1]].GetY());
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
