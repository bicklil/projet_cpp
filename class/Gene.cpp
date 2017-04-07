#include "Gene.h"

Gene::Gene(){
  numGene = 0;
}

Gene::Gene(const Gene& g){
    numGene = g.numGene;
    }

int Gene::GetGene(){
    return numGene;
    }
