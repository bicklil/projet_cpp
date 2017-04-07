#include"Recreation.h"

Recreation:: Recreation()
{
  ChromosomesRetenus=0;
  VillesRetenus=0;
}

Recreation:: Recreation(int nombreretenu)
{
  delete[] ChromosomesRetenus;
  ChromosomesRetenus = new Chromosome[nombreretenu];
  for (int i=0; i<;i++)
    {
      
    }
}

Recreation:: ~Recreation()
{
  delete[] ChromosomesRetenus;
  delete[] VillesRetenus;
}
