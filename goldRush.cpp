#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool solve(int n, int m){
  if (n == m) return true;
  if(n % 3 != 0) return false;
  
  return solve(n/3, m ) || solve(2*n/3, m);
}

int main() {_
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    cout << (solve(n, m) ? "YES" : "NO") << endl;
  }
  return 0;
}
