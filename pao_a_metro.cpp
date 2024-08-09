#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for(int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int maxv = 1e5+10;

int vet[maxv];

int solve(int mid, int k){
  int ans = 0;

  rep(i, 0, k){
    ans += vet[i]/mid;
  }
  
  return ans;
}

int main(){_
  int n, k; cin >> n >> k;

  rep(i, 0, k){
    cin >> vet[i];
  }

  int maior = 0;

  rep(i, 0, k){
    maior = max(maior, vet[i]);
  }
  
  int l = 0;
  int r = maior;
  int ans, mid;
  while(l <= r){
    mid = (l + r) / 2;
    
    ans = solve(mid, k);

    if(ans == n){
      break;
    } else if(ans > n){
      l = mid + 1;
    } else{
      r = mid - 1;
    }
  }

  cout << mid << endl;

  return 0;
}
