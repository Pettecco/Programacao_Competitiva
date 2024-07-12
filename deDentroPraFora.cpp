#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n;
  string frase;
  cin >> n;
  cin.ignore();

  while (n--)
  {

    getline(cin, frase);

    int tamanho = frase.size() / 2;

    reverse(frase.begin(), frase.begin() + tamanho);
    reverse(frase.begin() + tamanho, frase.end());

    cout << frase << endl;
  }

  return 0;
}