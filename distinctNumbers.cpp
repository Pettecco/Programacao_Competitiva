#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for(int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 2*(1e5);


int main(){_
  int n, x;
  set<int> s;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> x;
    s.insert(x);
  }

  cout << s.size() << endl;

  return 0;
}
