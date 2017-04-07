#ifndef chemin
#define chemin

#include"Chromosome.h"
#include"Ville.h"

class Chemin{
 public:
  static Chemin& getInstance_c()
  {
    static Chemin instance;
    return instance;
  }
  int GetScore();
  void SetScore(int);
  int Getnbvilles();
  Ville* GetCoords();
 private:
  int nbvilles;
  Ville* coordonnees_villes;
  int score;
  Chemin();
  Chemin(int, Ville*, int);
  ~Chemin();
  Chemin(const Chemin&);
};


#endif
