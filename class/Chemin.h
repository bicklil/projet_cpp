#ifndef chemin
#define chemin

#include"Chromosome.h"

class Chemin:public Chromosome{
 private:
  int nbvilles;
  int* LeChemin;
  // numville1 et numville2 designent la ville au debut et à la fin du chemin.
  int numville1;
  int numville2;
  int score;
 public:
  int GetScore();
  void SetScore(int);
  int* GetChemin();
  int Getnbvilles();
  Chemin();
  Chemin(int, int*, int*, int, int, int);
  ~Chemin();
  Chemin(const Chemin&);
};


#endif
