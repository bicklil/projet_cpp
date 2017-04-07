#ifndef chemin
#define chemin

#include"Chromosome.h"

class Chemin{
 private:
  int nbvilles;
  Chromosome* coordonnees_villes;
  int score;
 public:
  int GetScore();
  void SetScore(int);
  int Getnbvilles();
  Chromosome* GetCoords();
  Chemin();
  Chemin(int, Chromosome*, int);
  ~Chemin();
  Chemin(const Chemin&);
};


#endif
