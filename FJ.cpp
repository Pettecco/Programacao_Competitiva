#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main() {_
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  unordered_map<int, int> prefix_mod;  // Mapa para armazenar o primeiro índice de cada resto mod 7
  prefix_mod[0] = 0;  // Considera o caso quando a soma do subarray começa desde o índice 1
  int sum = 0;
  int max_len = 0;

  for (int i = 0; i < n; i++) {
    sum += arr[i];
    int mod = sum % 7;

    // Se o resto mod 7 já apareceu antes, temos um subarray cuja soma é múltipla de 7
    if (prefix_mod.find(mod) != prefix_mod.end()) {
      int prev_index = prefix_mod[mod];
      max_len = max(max_len, i + 1 - prev_index);  // Atualiza o tamanho máximo do subarray
    } else {
      // Caso o resto não tenha aparecido antes, armazenamos o índice em que ele apareceu
      prefix_mod[mod] = i + 1;
    }
  }

  cout << max_len << endl;
  return 0;
}



