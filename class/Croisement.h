#ifndef croisement
#define croisement
#include "Chemin.h"

class Croisement{
 private:
  int ptCroisement;
  int indCroisement1;
  int indCroisement2;
  Chemin* LesChemins;
  int tailleChemins;
 public:
  Croisement();
  Croisement(int, int, int, int, Chemin*);
  ~Croisement();
  void Execution_Croisement();
  Chemin* Get_Chemins();
};

#endif
