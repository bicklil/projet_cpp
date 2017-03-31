#include"Chemin.h"

Chemin:: Chemin()
{
  score = 0;
}

Chemin:: Chemin(int sco)
{
  score = sco;
}

int Chemin:: GetScore()
{
  return score;
}

void Chemin:: SetScore(int sco)
{
  score = sco;
}
