#ifndef chemin
#define chemin

#include"Chromosome.h"

class Chemin:public Chromosome{
 private:
  int nbvilles;
  int* LeChemin;
  // numville1 et numville2 désignent la ville au debut et à la fin du chemin.
  int numville1;
  int numville2;
  double distance;

 public:
  double GetDistance();
  void SetDistance(double);
  int* GetChemin();
  int Getnbvilles();
  Chemin();
  Chemin(int, int*, int*, int, int, double);
  ~Chemin();
  Chemin(const Chemin&);
  Chemin& operator=(const Chemin&);
};


#endif
