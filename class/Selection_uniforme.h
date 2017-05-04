#ifndef selection_uniforme
#define selection_uniforme
#include "Selection.h"
class Selection_uniforme:public Selection
{
  private:
    int nbelus;
  public:
    Selection_uniforme(int , Chemin * , int );
};
#endif
