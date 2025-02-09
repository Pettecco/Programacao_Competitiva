#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int n; ll s; cin >> n >> s;
  vector<int> nums(n);
  for(int i = 0; i < n; i++){
    cin >> nums[i];
  }

  int ans = INT_MAX;
  ll sum = 0;
  int j = 0;
  for(int i = 0; i < n; i++){
    sum += nums[i];
    while(sum - nums[j] >= s){
      sum -= nums[j];
      j++;
    }
    if(sum >= s)
      ans = min(ans, i - j + 1);
  }
  
  if(ans == INT_MAX) cout << -1 << endl;
  else cout << ans << endl;
  return 0;
}
