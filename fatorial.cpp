#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int n; cin >> n;
  int fat = 1;

  for(int i = n; i > 1; i--){
    fat *= i;
  }
  cout << fat << endl;
  return 0;
}