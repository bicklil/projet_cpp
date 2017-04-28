#ifndef mutation
#define mutation
#include "Chemin.h"

class Mutation{
 private:
  int nbMutations;
  int nbChemins;
  int tailleChemins;
  Chemin* CheminsAMuter;
 public:
  Mutation();
  Mutation(int, int, int, Chemin*);
  ~Mutation();
  Chemin* ResultatMutation();
};

#endif
