#include <bits/stdc++.h>

using namespace std;

int caso = 0;

int main()
{

  int n, q;

  while (cin >> n >> q && (n != 0 && q != 0))
  {

    cout << "CASE# " << ++caso << ":" << endl;

    int vet[n];

    for (int i = 0; i < n; i++)
    {
      cin >> vet[i];
    }

    sort(vet, vet + n);

    while (q--)
    {
      int x;
      cin >> x;
      int alto = n - 1, baixo = 0;
      int pos = -1;

      while (alto >= baixo)
      {
        int meio = (alto + baixo) / 2;

        if (vet[meio] == x)
        {
          pos = meio;
          break;
        }
        else if (vet[meio] > x)
        {
          alto = meio - 1;
        }
        else
        {
          baixo = meio + 1;
        }
      }

      if (pos == -1)
      {
        cout << x << " not found" << endl;
      }
      else
      {

        while (pos > 0 && vet[pos - 1] == x)
        {
          pos--;
        }

        cout << x << " found at " << pos + 1 << endl;
      }
    }
  }
}