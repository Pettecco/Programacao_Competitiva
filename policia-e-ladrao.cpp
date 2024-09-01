#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

char M[5][5];
bool vis[5][5];

vector<pair<int, int>> mov = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
pair<int, int> target = {4, 4}; // posição dos robbers

bool val(pair<int, int> u) {
  return u.first >= 0 && u.second >= 0 && u.first < 5 && u.second < 5 &&
         M[u.first][u.second] == '0' && !vis[u.first][u.second];
}

bool bfs(pair<int, int> s) {

  queue<pair<int, int>> q;
  q.push(s);

  memset(vis, false, sizeof vis);

  vis[s.first][s.second] = true;

  while (!q.empty()) {
    pair<int, int> v = q.front();
    q.pop();

    if (v == target)
      return true;

    for (auto u : mov) {
      u.first += v.first;
      u.second += v.second;
      if (val(u)) {
        q.push(u);
        vis[u.first][u.second] = true;
      }
    }
  }

  return false;
}

int main() {

  int T;
  cin >> T;

  while (T--) {
    for (int i = 0; i < 5; i++)
      for (int j = 0; j < 5; j++)
        cin >> M[i][j];

    pair<int, int> cops = {0, 0};

    bool copsWin = bfs(cops);

    if (copsWin)
      cout << "COPS" << endl;
    else
      cout << "ROBBERS" << endl;
  }

  return 0;
}

