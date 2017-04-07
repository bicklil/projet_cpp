#ifndef recreation
#define recreation

#include"Chromosome.h"
#include"Selection.h"
#include"Ville.h"

class Recreation{
 private:
  Chromosome* ChromosomesRetenus;
  Ville* VillesRetenues;
 public:
  Recreation();
  Recreation(int);
  ~Recreation();
};

#endif
