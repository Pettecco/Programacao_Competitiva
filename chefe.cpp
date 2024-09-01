#include <bits/stdc++.h>
#include <climits>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'

typedef long long ll;

const int MAXV = 505;

int n, m, t;
vector<vector<int>> adj(MAXV);
bool vis[MAXV];
int func[MAXV];
int bigAge = INT_MAX;
bool isTheFirstV = true;

void dfs(int v) {
  vis[v] = true;
  if (func[v] < bigAge && !isTheFirstV) {
    bigAge = func[v];
  }

  isTheFirstV = false;

  for (auto w : adj[v]) {
    if (w < 0 && !vis[abs(w)]) {
      dfs(abs(w));
    }
  }
}

void trade(int a, int b) {
  // atualizando todos os vértices
  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j < adj[i].size(); ++j) {
      if (adj[i][j] == a) {
        adj[i][j] = b;
      } else if (adj[i][j] == b) {
        adj[i][j] = a;
      } else if (adj[i][j] == -a) {
        adj[i][j] = -b;
      } else if (adj[i][j] == -b) {
        adj[i][j] = -a;
      }
    }
  }

  for (int j = 0; j < adj[a].size(); ++j) {
    if (adj[a][j] == b) {
      adj[a][j] = a;
    } else if (adj[a][j] == -b) {
      adj[a][j] = -a;
    }
  }
  for (int j = 0; j < adj[b].size(); ++j) {
    if (adj[b][j] == a) {
      adj[b][j] = b;
    } else if (adj[b][j] == -a) {
      adj[b][j] = -b;
    }
  }

  swap(adj[a], adj[b]);
}

int main() {
  _ char op;
  int a, b;
  while (cin >> n >> m >> t) {

    fill(adj.begin(), adj.end(), vector<int>());
        fill(begin(vis), end(vis), false);

    for (int i = 1; i <= n; i++) {
      cin >> func[i];
    }

    for (int i = 0; i < m; i++) {
      int x, y;
      cin >> x >> y;
      adj[x].push_back(y);
      adj[y].push_back(-x); // número negativo significa que a pessoa é
                            // gerenciada pelo módulo do número
    }

    while (t--) {
      cin >> op;
      if(op == 'T'){
        cin >> a >> b;
        trade(a, b);
      } else if(op == 'P'){
        cin >> a;
        bigAge = INT_MAX;
        isTheFirstV = true;
        fill(begin(vis), end(vis), false);
        dfs(a);
        if(bigAge != INT_MAX){
          cout << bigAge << endl;
        } else cout << "*" << endl;
      }
    }
  }
  return 0;
}
