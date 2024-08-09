#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for(int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 110;

int mapa[MAXV][MAXV];

int main(){_
  int n; cin >> n;
  
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      cin >> mapa[i][j];
  
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++){
      int x; cin >> x;
      mapa[i][j] += x;
    }
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++)
      cout << mapa[i][j] << " ";
    cout << endl;
  }

  return 0;
}
