#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  string s;
  priority_queue<int> pq;
  while(cin >> s && s != "end"){
    if(s == "insert"){
      int x; cin >> x;
      pq.push(x);
    } else{
      cout << pq.top() << endl;
      pq.pop();
    }
  }
  return 0;
}
