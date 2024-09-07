#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int n;
  int x, cont = 0, ans;
  while(cin >> n && n != 0){
    for(int i = 1; i <= n; i++){
      cin >> x;
      if(x == i) ans = x;
    }
    cout << "Teste " << ++cont << endl;
    cout << ans << endl;
    cout << endl;
  }
  return 0;
}