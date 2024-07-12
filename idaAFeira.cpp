#include <bits/stdc++.h>

using namespace std;

int main()
{

  map<string, double> produtos;
  string fruta;
  double preco;
  int qnt;
  int n, m, p;

  cin >> n;

  for (int i = 0; i < n; i++)
  {

    double total = 0;

    cin >> m;

    for (int j = 0; j < m; j++)
    {
      cin >> fruta >> preco;
      produtos[fruta] = preco;
    }

    cin >> p;
    for (int k = 0; k < p; k++)
    {
      cin >> fruta >> qnt;
      total += produtos[fruta] * qnt;
    }

    cout << fixed << setprecision(2);
    cout << "R$ " << total << endl;
  }
  return 0;
}