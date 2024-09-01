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
const int MAXV = 510;

int n, m;
char M[MAXV][MAXV];
bool vis[MAXV][MAXV];

// esquerda, direita, cima, baixo
vector<pair<int, int>> mov = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

bool val(pair<int, int> u) {
  return u.first >= 0 && u.second >= 0 && u.first < n && u.second < m &&
         M[u.first][u.second] == '.' && !vis[u.first][u.second];
}

pair<pair<int, int>, int> bfs(pair<int, int> s) {
  queue<pair<int, int>> q;
  memset(vis, false, sizeof vis); // Resetar a matriz de visitação

  q.push(s);
  vis[s.first][s.second] = true;

  int dist = 0;
  pair<int, int> farthest = s;

  while (!q.empty()) {
    int size = q.size(); // Tamanho do nível atual
    while (size--) {
      pair<int, int> v = q.front();
      q.pop();

      for (auto u : mov) {
        u.first += v.first;
        u.second += v.second;
        if (val(u)) {
          q.push(u);
          vis[u.first][u.second] = true;
          farthest = u;
        }
      }
    }
    dist++;
  }

  return {farthest, dist - 1}; // Retorna o nó mais distante e a distância total
}

int main() {
  _ while (cin >> n >> m && (n + m)) {
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        cin >> M[i][j];

    pair<int, int> source;
    pair<pair<int, int>, int> diametro;

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) {
        if (M[i][j] == '.') {
          source = {i, j};
          break;
        }
      }

    diametro = bfs(source);
    source = diametro.first;
    diametro = bfs(source);

    cout << diametro.second << endl;
  }
  return 0;
}
