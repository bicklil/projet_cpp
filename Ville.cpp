#include "Ville.h"

Ville::Ville(){
  numville = 0;
  x = 0;
  y = 0;
}

Ville::Ville(int pos_x, int pos_y, int nv){
  numville = nv;
  x = pos_x;
  y = pos_y;
}

int Ville::GetPos_X(){
   return x;
    }

int Ville::GetPos_Y(){
    return y;
    }