#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = (1e4*2)+10;

int bfs(int n, int m) {
    vector<int> D(MAXV, -1);
    D[n] = 0;

    queue<int> q;
    q.push(n);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        int x = u - 1, y = u * 2;
        if (x < 0 || y > MAXV) continue;

        for (auto c : {x, y}) {
            if (D[c] == -1) D[c] = D[u] + 1, q.push(c);
        }
    }
    return D[m];
}

int main(){_
  int n, m; cin >> n >> m;
  cout << bfs(n, m) << endl;
  return 0;
}
