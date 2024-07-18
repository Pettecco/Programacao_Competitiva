#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define MAXV 10005

vector<pair<int, int>> adj[MAXV]; // (vertex, weight)
int dist[MAXV];

void dijkstra(int origem) {
    bool vis[MAXV] = {};
    priority_queue<pair<int, int>> pq; // (dist, vertex)

    for (int i = 0; i < MAXV; i++)
        dist[i] = INF;

    dist[origem] = 0;
    pq.push(make_pair(0, origem)); // starting point

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (vis[u]) continue;
        vis[u] = true;

        for (auto& edge : adj[u]) {
            int v = edge.first;
            int duv = edge.second;

            if (dist[u] + duv < dist[v]) {
                dist[v] = dist[u] + duv;
                pq.push(make_pair(-dist[v], v)); // negative for min-heap behavior
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int casos;
    cin >> casos;
    while(casos--){
        int nVertices, nArestas, x, y, custo;
        cin >> nVertices >> nArestas;
        
        for(int i = 0; i < MAXV; i++){
            adj[i].clear();
        }

        for (int i = 0; i < nArestas; i++) {
            cin >> x >> y >> custo;
            adj[x].push_back(make_pair(y, custo));
        }

        int origem, destino;
        cin >> origem >> destino;
        
        dijkstra(origem);

        if (dist[destino] == INF)
            cout << "NO" << endl;
        else
            cout << dist[destino] << endl;
    }
     return 0;
}
