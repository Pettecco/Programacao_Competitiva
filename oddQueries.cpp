#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 2*(1e5) + 10;

int vet[MAXV];
ll prefixSum[MAXV];

int main() {_
  int t; cin >> t;
  while(t--){
    int n, q; cin >> n >> q;
    
    for(int i = 1; i <= n; i++)
      cin >> vet[i];

    vet[0] = 0;
    prefixSum[0] = 0;

    for(int i = 1; i <= n; i++){
      prefixSum[i] = prefixSum[i-1] + vet[i];
    }

    while(q--){
      int l, r, k; cin >> l >> r >> k;
      ll sum = prefixSum[r] - prefixSum[l-1];
      ll replaceSum = (r-l + 1) * k;
      ll isOdd = prefixSum[n] - sum;
      isOdd += replaceSum;
      if(isOdd & 1) cout<< "YES" << endl;
      else cout << "NO" << endl;
    }

  }
  return 0;
}
