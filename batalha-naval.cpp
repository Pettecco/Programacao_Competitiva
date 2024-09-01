#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

const int MAXV = 110;
char grid[MAXV][MAXV];
bool vis[MAXV][MAXV];
int n, m;

vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int, int> u) {
    return u.first >= 0 && u.second >= 0 && u.first < n && u.second < m;
}

void bfs(pair<int, int> s, set<pair<int, int>> &parts) {
    queue<pair<int, int>> q;
    q.push(s);
    vis[s.first][s.second] = true;
    parts.insert(s);
    
    while (!q.empty()) {
        pair<int, int> v = q.front();
        q.pop();
        
        for (auto d : mov) {
            pair<int, int> u = {v.first + d.first, v.second + d.second};
            
            if (val(u) && grid[u.first][u.second] == '#' && !vis[u.first][u.second]) {
                q.push(u);
                vis[u.first][u.second] = true;
                parts.insert(u);
            }
        }
    }
}

int main() {_
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    
    int k;
    cin >> k;
    set<pair<int, int>> shot_set;
    
    for (int i = 0; i < k; i++) {
        int l, c;
        cin >> l >> c;
        l--; c--;
        shot_set.insert({l, c});
    }
    
    memset(vis, false, sizeof(vis));
    
    // identificar todos os navios e marcar suas partes
    vector<set<pair<int, int>>> ships;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '#' && !vis[i][j]) {
                set<pair<int, int>> parts;
                bfs({i, j}, parts);
                ships.push_back(parts);
            }
        }
    }
    
    int count = 0;
    
    for (auto ship : ships) {
        bool destruiu = true;
        for (const auto& part : ship) {
            if (shot_set.find(part) == shot_set.end()) {
                destruiu = false;
                break;
            }
        }
        if (destruiu) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}

