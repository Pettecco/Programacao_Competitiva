#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e3+10;

vector<vector<int>> g(MAX);
vector<bool> vis(MAX);

void dfs(int v){
    vis[v] = true; //estou visitando
    for(auto w: g[v]) if(!vis[w]){
        dfs(w); // se o vizinho não foi visitado ainda, eu visito ele
    }
}

int main() {_

    int n, m;
    cin >> n >> m;
    
    for(int k = 0; k < m; k++){
        int i, j; cin >> i >> j; i--, j--;
        g[i].push_back(j);
        g[j].push_back(i); // não direcionado
    }
    int times = 0;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            dfs(i);
            times++;
        } 
    }

    cout << times << endl;

    return 0;
}