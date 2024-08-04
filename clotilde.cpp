#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const int MAX = 1e5;

unordered_set<int> proibidos;

vector<int> bfs(int start, int target){
    vector<int> dist(MAX + 1, INF);
    queue<int> fila;
    
    dist[start] = 0;
    fila.push(start);

    while(!fila.empty()){
        int u = fila.front();
        fila.pop();

        if (u == target) return dist;

        vector<int> vizinhos;

        if (u + 1 <= MAX && proibidos.find(u + 1) == proibidos.end()) {
            vizinhos.push_back(u + 1);
        }
        
        if (u - 1 > 0 && proibidos.find(u - 1) == proibidos.end()) {
            vizinhos.push_back(u - 1);
        }
        
        if (u * 2 <= MAX && proibidos.find(u * 2) == proibidos.end()) {
            vizinhos.push_back(u * 2);
        }
        
        if (u * 3 <= MAX && proibidos.find(u * 3) == proibidos.end()) {
            vizinhos.push_back(u * 3);
        }
        
        if (u % 2 == 0 && proibidos.find(u / 2) == proibidos.end()) {
            vizinhos.push_back(u / 2);
        }

        for (int v : vizinhos) {
            if (dist[v] == INF) { // se o vértice v ainda não foi visitado
                dist[v] = dist[u] + 1;
                fila.push(v);
            }
        }
    }
    
    return dist;
}

int main() {_
    int O, D, K;
    while(cin >> O >> D >> K && (O + D + K)){
        proibidos.clear();
        
        for(int i = 0; i < K; i++){
            int x; cin >> x;
            proibidos.insert(x);
        }

        vector<int> dist = bfs(O, D);

        if(dist[D] != INF){
            cout << dist[D] << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}

