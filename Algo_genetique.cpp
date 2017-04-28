#include<stdlib.h>
#include<cstdlib>
#include <iostream>
#include<time.h>
#include"Algo_genetique.h"
#include"cng.h"
#define VILLES 100

bool la_bool = true;

void Tableau_aleatoire(int min, int max, int taille, int *T)
{
  srand(time(NULL));
  for(int i=0;i<taille;i++)
    {
      // Initialise une valeur comprise entre min et max dans le tableau.
      T[i] = min + (rand() % (max - min));
    }
}

void dessin(void){
  if(la_bool){
    srand(time(NULL));
    // La première et la dernière ville du chemin.
    int Nville1, Nville2;
    Gene* TabGenes;
    Gene G1, G2;
    // Tableaux contenant les coordonnées x et y des villes.
    int *T1, *T2;
    Nville1 = 1 + rand()%VILLES;
    Nville2 = 1 + rand()%VILLES;
    while(Nville1 == Nville2)
      {
	Nville2 = 1 + rand()%VILLES;
      }
    T1 = new int[VILLES];
    T2 = new int[VILLES];
    Tableau_aleatoire(1, 800, VILLES, T1);
    Tableau_aleatoire(1, 600, VILLES, T2);
    // Population de taille VILLES, première génération.
    // Génération d'un chemin partant de la ville portant le numéro Nville1
    // et finissant dans la ville numéro Nville2.
    Chemin Population(VILLES, T1, T2, Nville1, Nville2, 0);
    // Recupere le tableau des gènes.
    TabGenes = Population.Chromosome::GetGene();
    cng_current_color(255, 0, 0);
    // Dessine de jolis cercles.
    for(int i=0; i<VILLES; i++) cng_circle(TabGenes[i].GetX(), TabGenes[i].GetY(), 3);
    // Bug avec std bad alloc, lié à Population.GetChemin().
    // Trace des lignes constituant le chemin.

    for(int j=0; j<VILLES-1; j++)
      {
	G1 = TabGenes[Population.GetChemin()[j]];
	G2 = TabGenes[Population.GetChemin()[j + 1]];
	cng_line(G1.GetX(),
		 G1.GetY(),
		 G2.GetX(),
		 G2.GetY());
		 }
    cng_swap_screen();
    la_bool= false;
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
