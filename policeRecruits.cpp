#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  _

      int n;
  cin >> n;
  int crimes = 0;
  int officers = 0;
  int x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x == -1 && officers == 0) {
      crimes++;
    } else if (x != -1) {
      officers += x;
    } else {
      officers -= 1;
    }
  }

  cout << crimes << endl;
  return 0;
}
