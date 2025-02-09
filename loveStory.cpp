#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main() {_
  int t; cin >> t;
  string b = "codeforces";
  while (t--) {
    string a; cin >> a;
    int ans=0;
    for(int i = 0; i < 10; i++){
      if(a[i] != b[i]) ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
