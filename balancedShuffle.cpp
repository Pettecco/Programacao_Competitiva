#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  
  string s; cin >> s;
  int position = 1, prefixBal = 0;
  vector<tuple<int, int, char>> balance;

  // Preencher o vetor balance com as tuplas (prefixBal, position, char)
  for (int i = 0; i < s.size(); i++) {
    balance.push_back(make_tuple(prefixBal, position, s[i]));
    position++;
    if (s[i] == '(') prefixBal++;
    else prefixBal--;
  }

  sort(balance.begin(), balance.end(), [](const tuple<int, int, char>& a, const tuple<int, int, char>& b) {
    if (get<0>(a) == get<0>(b)) {
      return get<1>(a) > get<1>(b);  // Ordenação pela posição em ordem decrescente
    }
    return get<0>(a) < get<0>(b);  // Ordenação pelo prefix balance em ordem crescente
  });
  
  for (auto out : balance) {
    cout << get<2>(out);
  }
  
  cout << endl;
  return 0;
}

