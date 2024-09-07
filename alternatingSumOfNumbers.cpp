#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
      int x; cin >> x;
      if(i % 2 == 0){
        sum -= x;
      } else{
        sum += x;
      }
    }
    cout << sum << endl;
  }

  return 0;
}