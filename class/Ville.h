#ifndef ville
#define ville

class Ville{
 public:
  static Ville& getInstance()
  {
    static Ville instance;
    return instance;
  }
 private:
  int numville, x, y;
 public:
  Ville();
  Ville(int, int, int);
  int GetPos_X();
  int GetPos_Y();
};

#endif
