#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int t; cin >> t;
  while (t--){
    priority_queue<int> pq;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
      int x; cin >> x;
      pq.push(x);
    }

    while(!pq.empty()){
      int num = pq.top();
      cout << num << " ";
      pq.pop();
      if(num/2 != 0){
        pq.push(num/2);
      }
    }
    cout << endl;
  }
  return 0;
}
