#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int t; cin >> t;
  queue<int> q;
  while(t--){
    int op; cin >> op;
    if(op == 1){
      int n; cin >> n;
      q.push(n);
    } else if(op == 2 && !q.empty()){
      q.pop();
    } else{
      q.empty() ? cout << "Empty!" << endl :
      cout << q.front() << endl;
      
    }
  }

  return 0;
}
