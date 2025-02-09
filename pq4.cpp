#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  priority_queue<int, vector<int>, greater<int>> pq;
  int q; cin >> q;
  while (q--) {
    string s; cin >> s;
    if (s == "push") {
      int x; cin >> x;
      pq.push(x);
    } else if (s == "pop") {
        pq.pop();
    } else { 
        cout << pq.top() << endl;
      }
    }
  return 0;
}

