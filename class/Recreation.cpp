#include"Recreation.h"

Recreation:: Recreation()
{
  ChromosomesRetenus=0;
}

Recreation:: Recreation(int nombreretenu)
{
  delete[] ChromosomesRetenus;
  ChromosomesRetenus = new Chromosome[nombreretenu];
  for (int i=0; i<2;i++)
    {
      ChromosomesRetenus[i] = 0;
    }
}

Recreation:: ~Recreation()
{
  delete[] ChromosomesRetenus;
}
