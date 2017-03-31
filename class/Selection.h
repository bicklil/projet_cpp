#ifndef selection
#define selection

class Selection
{
 private:
  int Nombre;
  int * TailleChemin;
  int ** ListeChemin;
 public:
  Selection();
  Selection(int, int *, int **);
  ~Selection();
};
#endif
