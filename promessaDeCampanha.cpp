#include <bits/stdc++.h>
#define MAXV 105
using namespace std;

vector<int> adj[MAXV];
bool vis[MAXV];

void dfs(int u)
{
  vis[u] = true;
  for (int v : adj[u])
  {
    if (!vis[v])
      dfs(v);
  }
}

int main()
{
  int t;
  cin >> t;
  for (int caso = 1; caso <= t; caso++)
  {
    int nVertices, nArestas, x, y;
    cin >> nVertices >> nArestas;

    // Limpar dados anteriores
    for (int i = 0; i <= nVertices; i++)
    {
      adj[i].clear();
      vis[i] = false;
    }

    for (int i = 0; i < nArestas; i++)
    {
      cin >> x >> y;
      adj[x].push_back(y);
      adj[y].push_back(x);
    }

    dfs(1);
    int cont = 0;
    for (int i = 2; i <= nVertices; i++)
    {
      if (!vis[i])
      {
        dfs(i);
        cont++;
      }
    }

    if (cont == 0)
    {
      cout << "Caso #" << caso << ": a promessa foi cumprida" << endl;
    }
    else
    {
      cout << "Caso #" << caso << ": ainda falta(m) " << cont << " estrada(s)" << endl;
    }
  }

  return 0;
}
