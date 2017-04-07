#ifndef gene
#define gene

class Gene{
  private:
    int numGene;
  public:
    Gene();
    Gene(const Gene&);
    int GetGene();
};

#endif
