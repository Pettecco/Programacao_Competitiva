#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define MAXV 10005

using namespace std;

vector<pair<int, int> > adj[MAXV]; //(vertice, peso)
int dist[MAXV];

void dijkstra(int origem)
{
    bool vis[MAXV] = {};
    priority_queue<pair<int, int> > pq; //fila de prioridade

    for (int i = 0; i < MAXV; i++)
        dist[i] = INF;

    dist[origem] = 0;

    pq.push(make_pair(0, origem)); //(dist, vert), porque a pq é ordenado baseado no .first

    while (!pq.empty())
    {
        int u = pq.top().second; //u = vértice
        pq.pop();

        if (!vis[u])
        {
            vis[u] = true;

            for (int i = 0; i < (int) adj[u].size(); i++)
            {
                int v = adj[u][i].first;
                int duv = adj[u][i].second; //distancia de u até v

                if (dist[u] + duv < dist[v]) //se achei um caminho menor que o atual
                {
                    dist[v] = dist[u] + duv; //salva a nova menor distancia até v
                    pq.push(make_pair(-dist[v], v)); //insire a distância negativa para a pq ficar em ordem crescente
                }
            }
        }
    }
}

int main()
{
    int nVertices, nArestas, x, y, custo;

    cin >> nVertices >> nArestas;

    for (int i = 0; i < nArestas; i++)
    {
        cin >> x >> y >> custo;
        adj[x].push_back(make_pair(y, custo));
        adj[y].push_back(make_pair(x, custo));
    }


    int origem = 0, destino = nVertices + 1;

    dijkstra(origem);

    cout << dist[destino] << endl;

    return 0;
}
