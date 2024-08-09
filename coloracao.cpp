#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 1050;

int n, m;
char M[MAXV][MAXV];
bool vis[MAXV][MAXV]; // indica se eu ja colori aquele ponto

// cima, baixo, esquerda, direita
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int, int> u) {
  return u.first >= 0 && u.second >= 0 && u.first < n && u.second < m &&
         M[u.first][u.second] == '.' && !vis[u.first][u.second];
}

void bfs(pair<int, int> s) {

  queue<pair<int, int>> q;
  q.push(s), vis[s.first][s.second] = true;

  while (!q.empty()) {
    pair<int, int> v = q.front();
    q.pop();

    for(auto u : mov){
      u.first += v.first;
      u.second += v.second;
      if(val(u)){
        q.push(u);
        vis[u.first][u.second] = true;
      }
    }
  }
}

int main() {
  _

          cin >>
      n >> m;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> M[i][j];

  int cliques = 0;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (M[i][j] == '.' && !vis[i][j]) {
        cliques += 1;
        pair<int, int> s = {i, j};
        bfs(s);
      }
  
  cout << cliques << endl;
  return 0;
}
