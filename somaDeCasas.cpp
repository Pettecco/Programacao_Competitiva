#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  _ int n;
  cin >> n;
  int vet[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> vet[i];
  }

  int i = 1;
  int j = n;

  int k;
  cin >> k;

  while (i != j) {
    int soma = vet[i] + vet[j];
    if (soma == k) {
      break;
    }
    if (soma < k) {
      i++;
    } else {
      j--;
    }
  }

  cout << vet[i] << " " << vet[j] << endl;

  return 0;
}
