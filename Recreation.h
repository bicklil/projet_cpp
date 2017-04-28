#ifndef recreation
#define recreation

#include"Chromosome.h"
#include"Selection.h"

class Recreation{
 private:
  Chromosome* ChromosomesRetenus;
 public:
  Recreation();
  Recreation(int);
  ~Recreation();
};

#endif
