#include <bits/stdc++.h>
#include <queue>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 10000;

int inverterNumero(int numero) {
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10; // Obtém o último dígito
        invertido = invertido * 10 + digito; // Adiciona o dígito ao número invertido
        numero /= 10; // Remove o último dígito do número original
    }

    return invertido;
}

vector<int> bfs(int start, int target){
  
  vector<int> dist(MAXV + 1, INF);
  queue<int> fila;

  dist[start] = 0;
  fila.push(start);

  while(!fila.empty()){
    int u = fila.front();
    fila.pop();

    if(u == target) return dist;

    vector<int> vizinhos;

    if(inverterNumero(u) > 0 && inverterNumero(u) < MAXV){
      vizinhos.push_back(inverterNumero(u));
    }

    if(u + 1 > 0 && u + 1 < MAXV){
      vizinhos.push_back(u + 1);
    }

    for(int v: vizinhos){
      if(dist[v] == INF){
        dist[v] = dist[u] + 1;
        fila.push(v);
      }
    }
  }

  return dist;
}

int main(){_
  int T; cin >> T;
  while(T--){
    int a, b;
    cin >> a >> b;
    vector<int> dist = bfs(a, b);
    cout << dist[b] << endl;
  }
  return 0;
}
