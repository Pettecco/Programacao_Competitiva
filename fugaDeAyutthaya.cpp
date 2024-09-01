#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'

const int INF = 0x3f3f3f3f;
const int MAXV = 1010;

int n, m;
char M[MAXV][MAXV];
bool vis[MAXV][MAXV];
int distFire[MAXV][MAXV];
int distSource[MAXV][MAXV];

vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int, int> u) {
  return u.first >= 0 && u.second >= 0 && u.first < n && u.second < m &&
         M[u.first][u.second] != '#' && M[u.first][u.second] != 'F' &&
         !vis[u.first][u.second];
}

int bfs(pair<int, int> start, pair<int, int> target, int distances[MAXV][MAXV]) {
  queue<pair<int, int>> q;
  q.push(start);
  distances[start.first][start.second] = 0;
  vector<vector<bool>> vis(n, vector<bool>(m, false));
  vis[start.first][start.second] = true;

  while (!q.empty()) {
    pair<int, int> v = q.front();
    q.pop();

    if(v == target)
       return distances[v.first][v.second];
    
    for (auto u : mov) {
      u.first += v.first;
      u.second += v.second;
      if (val(u)) {
        q.push(u);
        vis[u.first][u.second] = true;
        distances[u.first][u.second] = distances[v.first][v.second] + 1;
      }
    }
  }
  
  return INF;
}

int main() {_
  int t;
  cin >> t;
  while (t--) {

    cin >> n >> m;

    pair<int, int> fire;
    pair<int, int> s;
    pair<int, int> exit;

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) {
        cin >> M[i][j];
        if (M[i][j] == 'F')
          fire = {i, j};
        if (M[i][j] == 'S')
          s = {i, j};
        if (M[i][j] == 'E')
          exit = {i, j};
      }

    memset(distFire, INF, sizeof(distFire));
    memset(distSource, INF, sizeof(distSource));

    int fireToExit = bfs(fire, exit, distFire);
    int sourceToExit = bfs(s, exit, distSource);

    if(sourceToExit < fireToExit) cout << "Y" << endl;
    else cout << "N" << endl; 
  }

  return 0;
}
