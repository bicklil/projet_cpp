#ifndef chemin
#define chemin

#include"Fitness.h"
#include"Chromosome.h"
#include"Ville.h"

class Chemin{
 private:
  int nbvilles;
  Ville* coordonnees_villes;
  int score;
 public:
  Chemin();
  Chemin(int, Ville*, int);
  ~Chemin();
  Chemin(const Chemin&);
  int GetScore();
  void SetScore(int);
};


#endif
