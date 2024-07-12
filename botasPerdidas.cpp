#include <bits/stdc++.h>

using namespace std;

int main()
{

  int pares;
  int n;
  int m;
  char l;
  int sapatos[61];

  while (cin >> n)
  {

    pares = 0;

    for (int i = 0; i < 61; i++)
    {
      sapatos[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {

      cin >> m >> l;

      if (l == 'D')
      {
        if (sapatos[m] < 0)
        {
          pares++;
        }
        sapatos[m]++;
      }
      else if (l == 'E')
      {
        if (sapatos[m] > 0)
        {
          pares++;
        }
        sapatos[m]--;
      }
    }

    cout << pares << endl;
  }
}