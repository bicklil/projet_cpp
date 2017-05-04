#ifndef selection_par_rang
#define selection_par_rang
#include "Selection.h"
#include "Fitness.h"
class Selection_par_rang:public Selection
{
  private:
    int nbelus;
  public:
    Selection_par_rang(int, Population, int);
};
#endif
