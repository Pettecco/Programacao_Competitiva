#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 1e5 + 10;

ll prefixSum[MAXV];
int n;

int bs(int busc){
  int l = 1, r = n;
  int ans;
  while(l <= r){
    int mid = (l + r) / 2;
    if(prefixSum[mid] >= busc){
      ans = mid;
      r = mid - 1;
    } else{
      l = mid + 1;
    }
  }
  return ans;
}


int main() {_
  cin >> n;
  prefixSum[0] = 0;
  for(int i = 1; i <= n; i++){
    int x; cin >> x;
    prefixSum[i] = prefixSum[i-1] + x;
  }
  
  int q; cin >> q;

  while(q--){
    int busc; cin >> busc;
    cout << bs(busc) << endl;
  }

  return 0;
}
