#include <bits/stdc++.h>

using namespace std;

int main()
{

  bool presente[1000001];
  for (int i = 0; i < 1000001; i++)
  {
    presente[i] = false;
  }

  int contador = 0;
  int aux;
  int n;
  cin >> n;

  while (n--)
  {
    cin >> aux;
    presente[aux] = true;
  }

  for (int i = 0; i < 1000001; i++)
  {
    if (presente[i] == true)
    {
      contador++;
    }
  }

  cout << contador << endl;
}