#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int t; cin >> t;
  while (t--) {
    ll a, b; cin >> a >> b;
    if(b % a == 0){
      cout << b * b / a << endl;
    } else{
      cout << b * a / gcd(a, b) << endl;
    }
  }
  return 0;
}
