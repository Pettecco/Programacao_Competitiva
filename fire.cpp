#include <bits/stdc++.h>
#include <cstring>
#include <queue>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 1010;

int n, m;
char M[MAXV][MAXV];
bool vis[MAXV][MAXV];
int dist[MAXV][MAXV];

vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int, int> u) {
  return u.first >= 0 && u.second >= 0 && u.first < n && u.second < m &&
         M[u.first][u.second] != '#' && !vis[u.first][u.second];
}

void bfs_ms(vector<pair<int, int>> ms) {
  memset(vis, 0, sizeof vis);
  memset(dist, INF, sizeof dist);

  queue<pair<int, int>> q;
  for (auto s : ms)
    q.push(s), vis[s.first][s.second] = true, dist[s.first][s.second] = 0;

  while (!q.empty()) {
    pair<int, int> v = q.front();
    q.pop();

    for (auto u : mov) {
      u.first += v.first;
      u.second += v.second;

      if (val(u)) {
        q.push(u);
        vis[u.first][u.second] = true;
        dist[u.first][u.second] = dist[v.first][v.second] + 1;
      }
    }
  }
}

int bfs(pair<int, int> s) {
  
  memset(vis, 0, sizeof vis);
  
  queue<pair<int, int>> q;
  q.push(s); vis[s.first][s.second] = true; dist[s.first][s.second] = 0;

  while(!q.empty()){
    pair<int, int> v = q.front(); q.pop();

    if(v.first == 0 || v.second == 0 || v.first == n-1 || v.second == m-1)
      return dist[v.first][v.second] + 1;
    
    for(auto u : mov){
      u.first += v.first, u.second += v.second;

      if(val(u) && dist[v.first][v.second] < dist[u.first][u.second]){
        q.push(u), vis[u.first][u.second] = true;
        dist[u.first][u.second] = dist[v.first][v.second] + 1;
      }
    }
  }

  return -1;
}

int main() {
  _

      int t;
  cin >> t;
  while (t--) {

    cin >> m >> n;
    // BFS MULTISOURCE
    // BFS DA SOURCE

    vector<pair<int, int>> ms;
    pair<int, int> s;

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) {
        cin >> M[i][j];
        if (M[i][j] == '*')
          ms.push_back({i, j});
        if (M[i][j] == '@')
          s = {i, j};
      }

    bfs_ms(ms);

    int ans = bfs(s);
    if(ans == -1)
      cout << "IMPOSSIBLE" << endl;
    else
      cout << ans << endl;
  }

  return 0;
}
