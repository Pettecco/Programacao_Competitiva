#include <bits/stdc++.h>

using namespace std;

void dfs1(int node, vector<vector<int>>& graph, vector<bool>& visited, stack<int>& finishStack) {
    visited[node] = true;
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs1(neighbor, graph, visited, finishStack);
        }
    }
    finishStack.push(node);
}

void dfs2(int node, vector<vector<int>>& reverseGraph, vector<bool>& visited, vector<int>& scc) {
    visited[node] = true;
    scc.push_back(node);
    for (int neighbor : reverseGraph[node]) {
        if (!visited[neighbor]) {
            dfs2(neighbor, reverseGraph, visited, scc);
        }
    }
}

int kosaraju(int N, vector<vector<int>>& graph, vector<vector<int>>& reverseGraph) {
    vector<bool> visited(N + 1, false);
    stack<int> finishStack;
    
    for (int i = 1; i <= N; ++i) {
        if (!visited[i]) {
            dfs1(i, graph, visited, finishStack);
        }
    }
    
    fill(visited.begin(), visited.end(), false);
    int sccCount = 0;
    
    while (!finishStack.empty()) {
        int node = finishStack.top();
        finishStack.pop();
        if (!visited[node]) {
            vector<int> scc;
            dfs2(node, reverseGraph, visited, scc);
            sccCount++;
        }
    }
    
    return sccCount;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int teste = 0;
    int p, b;
    while(cin >> p >> b && (p + b)){
        
      vector<vector<int>> graph(p + 5);
      vector<vector<int>> reverseGraph(p + 5);
        
      for (int i = 0; i < b; ++i) {
        int x, y; cin >> x >> y;
        graph[x].push_back(y);
        reverseGraph[y].push_back(x);
      }
        
      int sccCount = kosaraju(p, graph, reverseGraph);
       
      cout << "Teste " << ++teste << endl;
      if (sccCount == 1) cout << "S" << endl;
      else cout << "N" << endl;

      cout << endl;
    }
    return 0;
}

