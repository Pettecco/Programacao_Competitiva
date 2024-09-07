#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solve(int a, int b){
  int sum = a + 2*b; 

  if(sum % 2 != 0){
    cout << "NO" << endl;
  }

  else{
    int targetSum = sum/2;
    if (targetSum <= a + 2 * b && targetSum % 2 <= a) {
        cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
}

int main() {_
  int t; cin >> t;
  while(t--){
    int a, b; cin >> a >> b;
    solve(a, b);
  }
  return 0;
}