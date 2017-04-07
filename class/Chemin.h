#ifndef chemin
#define chemin

#include"Chromosome.h"
#include"Ville.h"

class Chemin{
 private:
  int nbvilles;
  Ville* coordonnees_villes;
  int score;
 public:
  int GetScore();
  void SetScore(int);
  int Getnbvilles();
  Ville* GetCoords();
  Chemin();
  Chemin(int, Ville*, int);
  ~Chemin();
  Chemin(const Chemin&);
};


#endif
