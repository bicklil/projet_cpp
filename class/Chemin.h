#ifndef chemin
#define chemin

#include"Fitness.h"
#include"Chromosome.h"

class Chemin{
 private:
  int nbchemins;
  int* coordonnees_chemins;
  int score;
 public:
  Chemin();
  Chemin(int, Chromosome*, int);
  ~Chemin();
  int GetScore();
  void SetScore(int);
};


#endif
