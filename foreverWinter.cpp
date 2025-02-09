#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 210;

vector<vector<int>> graph(MAXV);
int n, m;

void solve(){
  unordered_map<int, int> hashMap;
  for(int i = 1; i <= n; i++){
      hashMap[graph[i].size()]++;
  }
  
  vector<int> v;
  for(auto w : hashMap){
    v.push_back(w.second);
  }

  sort(v.begin(), v.end());

  if(v.size() == 3){
    cout << v[1] << " "<< v[2] / v[1] << endl;
  } else {
    cout << v[0] - 1 << " " << v[1] / (v[0] - 1) << endl;
  }

}


int main() {_
  int t; cin >> t;
  while (t--) {
    for (int i = 0; i < MAXV; i++) {
      graph[i].clear();
    }
    cin >> n >> m;
    for(int i = 0; i < m; i++){
      int a, b; cin >> a >> b;
      graph[a].push_back(b);
      graph[b].push_back(a);
    }
    solve();
  }
  return 0;
}
