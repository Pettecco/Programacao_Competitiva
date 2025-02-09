#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int n, q; cin >> n >> q;
  
  vector<priority_queue<int>> pq(n);
  
  int op, t, x;
  while (q--) {
    cin >> op;
    if (op == 0) {
     cin >> t >> x;
     pq[t].push(x);
    } else if(op == 1){
      cin >> t;
      if(!pq[t].empty()){
        cout << pq[t].top() << endl;
      }
    } else{
      cin >> t;
      if(!pq[t].empty()){
        pq[t].pop();
      }
    }
  }
  
  return 0;
}
