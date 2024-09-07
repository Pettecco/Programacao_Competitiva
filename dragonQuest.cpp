#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_

  int t; cin >> t;

  while(t--){
    int x, n, m;
    cin >> x >> n >> m;

    while(x > 20 && n--){
      x = (x/2)+10;
    }

    if(x > 0){
      while(m--){
        x -= 10;
      }
    }

    if(x <= 0) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}