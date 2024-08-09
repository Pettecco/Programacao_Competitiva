#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for(int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 220;

vector<vector<int>> table (MAXV);

int main(){_
  int n; cin >> n;

  while(n--){
    int m, c; cin >> m >> c;
    
    rep(i, 0, MAXV){
      table[i].clear();
    }

    rep(i, 0, c){
      int x; cin >> x;
      int ans = x % m;
      table[ans].push_back(x);
    }

    rep(i, 0, m){

      cout << i << " -> ";
      
      for(auto w: table[i]){
        if(w != 0)
          cout << w << " -> ";
      }
      
      cout << '\\' << endl; 
    }
  
    if(n != 0)
      cout << endl;
  }
  return 0;
}
