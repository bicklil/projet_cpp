#ifndef ville
#define ville

class Ville{
 private:
  int numville, x, y;
 public:
  Ville();
  Ville(int, int, int);
  Ville& operator=(const Ville&);
  int GetPos_X();
  int GetPos_Y();
};

#endif
