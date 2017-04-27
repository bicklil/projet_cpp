#include "Gene.h"

Gene::Gene(){
  numGene = 0;
  VilleEq = Ville(0, 0, 0);
}

Gene::Gene(const Gene& g){
    numGene = g.numGene;
    VilleEq = g.VilleEq;
    }

void Gene:: SetnumGene(int nouveau){
  numGene = nouveau;
}

int Gene::GetGene(){
    return numGene;
    }

void Gene::SetCoords(int x, int y){
  VilleEq = Ville(numGene, x, y);
}
