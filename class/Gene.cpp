#include "Gene.h"
#include <iostream>

Gene::Gene(){
  numGene = 0;
  VilleEq = Ville();
}

Gene::Gene(const Gene& g){
    numGene = g.numGene;
    VilleEq = g.VilleEq;
    }

Gene::Gene(int num, int x, int y)
{
  numGene = num;
  VilleEq = Ville(num, x, y);
}

void Gene:: SetVille(int nouveaunum, int nouveaux, int nouveauy){
  numGene = nouveaunum;
  VilleEq = Ville(nouveaunum, nouveaux, nouveauy);
}

Gene& Gene::operator=(const Gene& G)
{
  numGene = G.numGene;
  VilleEq = G.VilleEq;
  return *this;
}

int Gene::GetGene(){
    return numGene;
    }

int Gene::GetX()
{
  return VilleEq.GetPos_X();
}

int Gene::GetY()
{
  return VilleEq.GetPos_Y();
}
