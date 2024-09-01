#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'

int main() {
  _

      int n;
  while (cin >> n && n != 0) {
    list<int> cartas;
    list<int> descart;

    for (int i = n; i >= 1; i--) {
      cartas.push_front(i);
    }

    while (cartas.size() > 1) {
      int topo = cartas.front();
      descart.push_back(topo);
      cartas.pop_front();

      int segundo = cartas.front();
      cartas.pop_front();
      cartas.push_back(segundo);
    }

    cout << "Discarded cards: ";
    auto it = descart.begin();
    while (it != descart.end()) {
      cout << *it;
      if (next(it) != descart.end()) {
        cout << ", ";
      }
      ++it;
    }
    cout << endl;

    cout << "Remaining card: " << cartas.front() << endl;
  }

  return 0;
}
