#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    priority_queue<int> pq;
    ll ans = 0;
    for(int i = 0; i < n; i++){
      int x; cin >> x;
      if(x == 0 && !pq.empty()){
        ans += pq.top(); pq.pop();
      } else{
        pq.push(x);
      }
    }
    cout << ans << endl;
  }
  return 0;
}
