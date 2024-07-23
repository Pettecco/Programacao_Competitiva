#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> graph[], vector<int> &dist, int src, int size)
{
	queue<int> next;
	
	next.push(src);
	dist[src] = 0;
	
	while(!next.empty())
	{
		int u = next.front();
		next.pop();
		
		for(int j = 0; j < (int)graph[u].size(); j++)
		{
			int v = graph[u][j];
			
			if(dist[v] > dist[u] + 1)
			{
				dist[v] = dist[u] + 1;
				next.push(v);
			}
		}
	}
}
	
int main()
{
	int c, e, l, p;
	int tst = 0;
	
	while((cin >> c >> e >> l >> p) && (c + e + l + p))
	{
		vector<int> graph[c];
		
		for(int i = 0; i < e; i++)
		{
			int u, v;
			
			cin >> u >> v; u--,v--; // zero based
			
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		
		vector<int> dist(c, INT_MAX);
		
		bfs(graph, dist, l - 1, c);
	
		cout << "Teste " << ++tst << endl;
		
		for(int v = 0; v < c; v++)
		{
			if(dist[v] && dist[v] <= p)
			{
				cout << v + 1;
				if(v < c) cout << " ";
			}
		}
		
		cout << endl << endl;
	}
	
	return 0;
}
