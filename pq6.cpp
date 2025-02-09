#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

priority_queue<ll> pq;
stack<ll> aux;


int main() {_
  int n; cin >> n;
  
  if(n <= 2){
    while (n--){
      int x; cin >> x;
      cout << -1 << endl;
    }
    return 0;
  }
  
  ll num;
  for(int i = 0; i < n; i++){
    cin >> num;
    if(i < 2){
      pq.push(num);
      cout << -1 << endl;
      continue;
    }
    
    pq.push(num);
    int cont = 0;
    ll ans = 1;
    while (cont < 3){
      ans *= pq.top();
      aux.push(pq.top());
      pq.pop();
      cont++;
    }

    cout << ans << endl;
    for(int i = 0; i < 3; i++){
      pq.push(aux.top());
      aux.pop();
    }
  }
  return 0;
}
