#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int n; ll s; cin >> n >> s;

  vector<int> nums(n);

  for(int i = 0; i < n; i++){
    cin >> nums[i];
  }
  
  int ans = 0;
  int j = 0;
  ll sum = 0;
  
  for(int i = 0; i < n; i++){
    sum += nums[i];
    while(sum > s){
      sum -= nums[j];
      j++;
    }

    ans += i - j + 1;
  }

  cout << ans << endl;
  return 0;
}

