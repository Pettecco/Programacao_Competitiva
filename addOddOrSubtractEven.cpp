#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_

  int t; cin >> t;

  while(t--){
    int a, b; cin >> a >> b;
    if(a == b){
      cout << 0 << endl;
    }
    else if(a < b){
      int aux = b - a;
      if(aux % 2 != 0){
        cout << 1 << endl;
      } else{
        cout << 2 << endl;
      }
    }
    else if(a > b){
      int aux = b - a;
      if(aux % 2 == 0){
        cout << 1 << endl;
      } else{
        cout << 2 << endl;
      }
    }
  }
  return 0;
}