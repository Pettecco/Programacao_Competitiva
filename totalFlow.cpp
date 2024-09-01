#include <bits/stdc++.h>

using namespace std;

#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout << __LINE__ << ": " << #x << " = " << x << endl;
#define debug2(x, y)                                                           \
  cout << __LINE__ << ": " << #x << " = " << x << " " << #y << " = " << y      \
       << endl;
#define all(c) (c).begin(), (c).end()
#define F first
#define S second
#define UNIQUE(c)                                                              \
  sort(all(c));                                                                \
  (c).resize(unique(all(c)) - c.begin());
#define PI 3.1415926535897932384626433832795028841971
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

// Dinic para fluxo maximo
// Grafo indexado em 1
// Inicializar maxV, source, sink
// Montar o grafo chamando
// add_edge(u,v,c,f), sendo c cap. de u->v e f flow de u->v
struct use {
  int from, to;
  ll cap, flow;
  use(int _from = -1, int _to = -1, ll _cap = 0, ll _flow = 0) {
    from = _from;
    to = _to;
    cap = _cap;
    flow = _flow;
  }
};
const int maxV = 505;
int source, sink;
vector<int> adj[maxV];
vector<use> edg;
int dst[maxV];
int ptr[maxV];
void add_edge(int u, int v, int c, int f) {
  adj[u].pb(edg.size());
  edg.pb(use(u, v, c, 0));
  adj[v].pb(edg.size());
  edg.pb(use(v, u, 0, 0));
}
bool bfs() {
  memset(dst, -1, sizeof dst);
  queue<ii> q;
  dst[source] = 0;
  q.push(ii(source, 0));
  while (!q.empty()) {
    int u = q.front().F, d = q.front().S;
    q.pop();
    if (u == sink)
      return true;
    rep(i, 0, adj[u].size()) {
      int id = adj[u][i];
      use aux = edg[id];
      if (dst[aux.to] != -1)
        continue;
      if (aux.cap - aux.flow > 0) {
        dst[aux.to] = d + 1;
        q.push(ii(aux.to, d + 1));
      }
    }
  }
  return false;
}
ll dfs(int u, ll c) {
  if (u == sink)
    return c;
  ll ret = 0;
  for (; ptr[u] < adj[u].size(); ptr[u]++) {
    int id = adj[u][ptr[u]];
    use aux = edg[id];
    if (dst[aux.to] != dst[u] + 1)
      continue;
    if (aux.cap - aux.flow > 0) {
      ret = dfs(aux.to, min(c, aux.cap - aux.flow));
      if (ret > 0) {
        edg[id].flow += ret;
        edg[id ^ 1].flow -= ret;
        return ret;
      }
    }
  }
  return ret;
}
ll maxFlow() {
  ll ret = 0;
  while (bfs()) {
    memset(ptr, 0, sizeof ptr);
    while (1) {
      ll push = dfs(source, 1LL << 56);
      if (!push)
        break;
      ret += push;
    }
  }
  return ret;
}

int charToNumber(char c) {
    return (c - 'A') + 1;
}

int main() {
  int N, a, b, c; cin >> N;
  char s1, s2;
  for(int i = 0; i < N; i++){
    cin >> s1 >> s2 >> c;
    a = charToNumber(s1);
    b = charToNumber(s2);
    add_edge(a, b, c, 0);
    add_edge(b, a, c, 0);
  } 
  source = 1;
  sink = 26;
  
  ll flow = maxFlow();
  cout << flow << endl;
}
