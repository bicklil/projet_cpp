#ifndef croisement
#define croisement
#include "Chemin.h"

class Croisement{
 private:
  int ptCroisement;
  int tailleChem;
  Chemin* LesChemins;
  int tailleChemins;
 public:
  Croisement();
  Croisement(int, int, int, Chemin*);
  ~Croisement();
  void Execution_Croisement();
  Chemin* Get_Chemins();
};

#endif
