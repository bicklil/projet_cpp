#ifndef selection_par_tournoi
#define selection_par_tournoi
#include "Selection.h"
class Selection_par_tournoi: public Selection
{
 private:
  int nbelus;
 public:
  Selection_par_tournoi(int, Chemin*, int);
};
#endif
