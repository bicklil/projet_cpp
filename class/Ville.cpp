#include "Ville.h"
#include <iostream>

Ville::Ville(){
  numville = 0;
  x = 0;
  y = 0;
}

Ville::Ville(int nv, int pos_x, int pos_y){
  //std::cout << nv<< '\n';
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

Ville& Ville::operator=(const Ville &V2)
{
  numville = V2.numville;
  x = V2.x;
  y = V2.y;
  return *this;
}
