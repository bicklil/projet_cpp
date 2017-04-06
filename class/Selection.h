#ifndef selection
#define selection
#include "Chemin.h"
class Selection
{
 private:
  int NombreChemins;
  Chemin * Chemins;
 public:
  Selection();
  Selection(int, Chemin *);
  ~Selection();
  int GetNombreChemins();
};
#endif
