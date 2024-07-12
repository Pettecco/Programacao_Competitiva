#include <bits/stdc++.h>

using namespace std;

int main()
{

  double m[12][12];

  int c;
  char t;
  double soma = 0;

  cin >> c;
  cin >> t;

  for (int i = 0; i < 12; i++)
    for (int j = 0; j < 12; j++)
    {
      cin >> m[i][j];
    }
  for (int i = 0; i < 12; i++)
  {
    soma += m[i][c];
  }
  if (t == 'S')
  {
    cout << fixed << setprecision(1);
    cout << soma << endl;
  }
  else
  {
    cout << fixed << setprecision(1);
    cout << soma / 12 << endl;
  }
}