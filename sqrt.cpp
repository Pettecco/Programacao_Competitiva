class Solution
{
public:
  int mySqrt(int x)
  {

    int esq = 0;
    int dir = x;
    long long int meio;

    while (esq <= dir)
    {

      meio = (esq + dir) / 2;

      if (meio * meio == x)
      {
        return meio;
      }
      else if (meio * meio < x)
      {
        esq = meio + 1;
      }
      else
      {
        dir = meio - 1;
      }
    }

    return dir;
  }
};