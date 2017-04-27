#include<stdlib.h>
#include"Algo_genetique.h"
#include"cng.h"
// Initialisation de l'algorithme génétique, avec le nombre de ville, et la
// taille de la fenêtre.
int main(int argc, char* argv[])
{
  // Comme ça il n'y a plus le warning:
  // deprecated conversion from string constant to ‘char*’ [-Wwrite-strings]
  // Comme c'est une variable locale pas besoin de faire delete[] titre après.
  char titre[35] = "la fenetre du voyageur de commerce";
  cng_init_window(&argc, argv, titre, 800, 600);
  //cng_display_func(points);
  cng_clear_screen();
  cng_main_loop();
  cng_destroy_window();
}
