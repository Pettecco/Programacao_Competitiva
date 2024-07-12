#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, r, aux;
  bool vet[10001];

  while (cin >> n >> r)
  {

    for (int i = 0; i < 10001; i++)
    {
      vet[i] = false;
    }

    for (int i = 0; i < r; i++)
    {
      cin >> aux;
      vet[aux] = true;
    }

    if (n == r)
    {
      cout << "*" << endl;
    }
    else
    {
      for (int i = 1; i <= n; i++)
      {
        if (vet[i] == false)
        {
          cout << i << " ";
        }
      }
      cout << endl;
    }
  }
}