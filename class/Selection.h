#ifndef selection
#define selection
#include "Chemin.h"
class Selection
{
 private:
  int NombreChemins;
  int * Chemins;
 public:
  Selection();
  Selection(int);
  ~Selection();
  int GetNombreChemins();
  int* GetindChemins();
};
#endif
