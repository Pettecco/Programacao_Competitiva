#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 4020;

unordered_map<string, vector<string>> adj;

int bfs(string origem, string destino) {

  if (origem == destino)
    return 0;

  unordered_map<string, int> dist;
  queue<string> q;

  q.push(origem);
  dist[origem] = 0;

  while (!q.empty()) {
    string u = q.front();
    q.pop();

    for (auto v : adj[u]) {
      if (dist.find(v) == dist.end()) { // se nao foi visitado
        dist[v] = dist[u] + 1;
        q.push(v);

        if (v == destino)
          return dist[v]; // cheguei ao destino
      }
    }
  }

  return INF;
}

int main() {
  _ int P, L;
  cin >> P >> L;
  string a, b;
  string origem = "Entrada", destino = "*", saida = "Saida";
  for (int i = 0; i < L; i++) {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  int dist = 0;

  dist += bfs(origem, destino);
  dist += bfs(destino, saida);

  cout << dist << endl;

  return 0;
}
