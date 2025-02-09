#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  _ int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n == 1) {
      int x;
      cin >> x;
      if (x == 1)
        cout << 0 << endl;
      else
        cout << 1 << endl;
      continue;
    }
    int ans = 0, current = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x == 0) {
        current++;
      } else {
        ans = max(ans, current);
        current = 0;
      }
    }
    ans = max(ans, current);
    cout << ans << endl;
  }
  return 0;
}
