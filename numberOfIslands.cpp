class Solution {
public:
    vector<pair<int, int>> mov = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
    vector<vector<bool>> vis;
    int n, m;

    bool val(pair<int, int> u, const vector<vector<char>>& grid) {
        return u.first >= 0 && u.second >= 0 && u.first < n && u.second < m &&
               grid[u.first][u.second] == '1' && !vis[u.first][u.second];
    }

    void bfs(pair<int, int> s, const vector<vector<char>>& grid) {
        queue<pair<int, int>> q;
        q.push(s);
        vis[s.first][s.second] = true;

        while (!q.empty()) {
            auto v = q.front();
            q.pop();

            for (auto dir : mov) {
                pair<int, int> u = {v.first + dir.first, v.second + dir.second};
                if (val(u, grid)) {
                    q.push(u);
                    vis[u.first][u.second] = true;
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        vis = vector<vector<bool>>(n, vector<bool>(m, false));
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    bfs({i, j}, grid);
                    count++;
                }
            }
        }
        
        return count;
    }
};