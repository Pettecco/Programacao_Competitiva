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

vector<pair<string, int>> churras;

int main() {
  _ int n, value;
  string food;
  while (cin >> n) {
    
    rep(i, 0, n) {
      cin.ignore();
      cin >> food >> value;
      churras.emplace_back(food, value);
    }
    
    sort(churras.begin(), churras.end(), [](const pair<string, int>&a, const pair<string,int>&b){
      return a.second < b.second;
    });
    
   for (size_t i = 0; i < churras.size(); ++i) {
        cout << churras[i].first;
        if (i != churras.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    churras.clear();
  }
  return 0;
}

