#include "Gene.h"
#include <iostream>

Gene::Gene(){
  numGene = 0;
  VilleEq = Ville(0, 0, 0);
}

Gene::Gene(const Gene& g){
    numGene = g.numGene;
    VilleEq = g.VilleEq;
    }

void Gene:: SetVille(int nouveaunum, int nouveaux, int nouveauy){
  numGene = nouveaunum;
  VilleEq = Ville(nouveaunum, nouveaux, nouveauy);
}

int Gene::GetGene(){
    return numGene;
    }

int Gene::GetX()
{
  return VilleEq.GetPos_X();
}

int Gene:: GetY()
{
  return VilleEq.GetPos_Y();
}
