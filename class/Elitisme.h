#ifndef elitisme
#define elitisme

#include"Fitness.h"
#include"Selection.h"

class Elitisme{
 private:
  int* ChromosomeElites;
  int nbElites;
 public:
  Elitisme();
  Elitisme(int, int*);
  ~Elitisme();
};

#endif
