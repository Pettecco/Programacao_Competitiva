#include <bits/stdc++.h>

using namespace std;

int calculaX(int n, int i, int maxSum)
{
  int somaAtual = 0;
  for (int j = 1; j <= n; j++)
  {
    if ((j * i) <= n)
    {
      somaAtual += (i * j);
    }
  }

  if (somaAtual > maxSum)
  {
    return somaAtual;
  }
  return maxSum;
}

int main()
{
  int t, n, x;
  int maxSum, somaCalculada;

  cin >> t;

  while (t--)
  {
    x = 2;
    cin >> n;
    maxSum = -1;
    for (int i = 2; i <= n; i++)
    {
      somaCalculada = calculaX(n, i, maxSum);
      if (somaCalculada > maxSum)
      {
        maxSum = somaCalculada;
        x = i;
      }
    }
    cout << x << endl;
  }
}