#include <bits/stdc++.h>

using namespace std;
// para esse problema é necessário calcular o indice onde se encotra o numero l e o indice do numero r e subtrair
const int MAX = 10e5 + 10;
int vet[MAX];
int n;

void binarySearch(int l, int r)
{
  auto lower = lower_bound(vet, vet + n, l); // encontra o primeiro elemento no array que é maior ou igual a l
  auto upper = upper_bound(vet, vet + n, r); // encontra o primeiro elemento no array que é maior que r

  cout << upper - lower << " ";
}

int main()
{
  int k;
  int l, r, mid;
  int menor, maior;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> vet[i];
  }

  sort(vet, vet + n);

  cin >> k;

  while (k--)
  {
    cin >> l >> r;
    binarySearch(l, r);
  }
  cout << endl;
}
