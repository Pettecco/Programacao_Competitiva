#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int n; cin >> n;
  int ans = 0;
  
  int res = n % 5;
  ans += n/5;
  if(res != 0) ans++;

  cout << ans << endl;

  return 0;
}
