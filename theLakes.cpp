#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int grid[1010][1010];
bool vis[1010][1010];
int n, m;
vector<pair<int, int>> mov = {{0,1}, {1,0}, {0,-1}, {-1,0}};

bool val(pair<int, int> u){
  return u.first >= 0 && u.second >= 0 && u.first < n && u.second < m && !vis[u.first][u.second] && grid[u.first][u.second
  ] != 0;
}

int bfs(pair<int, int> v){
  vis[v.first][v.second] = true;
  queue<pair<int, int>> q; q.push(v);
  int currentVol = 0;

  while(!q.empty()){
    pair<int, int> u = q.front();
    q.pop();
    currentVol += grid[u.first][u.second];
    for(auto w : mov){
      w.first += u.first;
      w.second += u.second;
      if(val(w)){
        q.push(w);
        vis[w.first][w.second] = true;
      }
    }
  }

  return currentVol;
}

int main() {_
  int t; cin >> t;
  while (t--) {
    cin >> n >> m;
    for(int i = 0; i < n; i++)
      for(int j = 0; j < m; j++)
        cin >> grid[i][j];

    int maxVol = 0;
    memset(vis, false, sizeof vis);

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(grid[i][j] != 0 && !vis[i][j]){
          int currentVol = bfs({i, j});
          maxVol = max(maxVol, currentVol);
        }
      }
    }
    
    cout << maxVol << endl;
  }
  return 0;
}
