#ifndef selection_roulette
#define selection_roulette
#include "Selection.h"
class Selection_roulette:public Selection
{
 private:
  int nbelus;
  float probabilite;
 public:
  Selection_roulette();
  Selection_roulette(int, Chemin*, float, int);
};
#endif
