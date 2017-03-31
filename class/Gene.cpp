#import "Gene.h"

Gene::Gene(const Gene& g){
    numGene = g.numGene;
    }

int Gene::GetGene(){
    return numGene;
    }
