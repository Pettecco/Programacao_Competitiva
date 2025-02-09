#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int n; cin >> n;
  ll g = 0; ll x;
  for(int i = 0; i < n; i++){
    cin >> x;
    g = gcd(g, x);
  }
  
  int ans = 0;

  for (int i = 1; i * 1ll * i <= g; i++) {
		if (g % i == 0) {
			ans++;
			if (i != g / i) {
				ans++;
			}
		}
	}

  cout << ans << endl;
  return 0;
}
