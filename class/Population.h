#ifndef population
#define population

class Population
{
 private:
  int taille;
  int generation;
 public:
  Population();
  Population(int, int);
  void GenerationUp();
};

#endif
