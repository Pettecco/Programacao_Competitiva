#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
  int t, n, m; cin >> t;

  while(t--){
    cin >> n >> m;
    cin.ignore();
    int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0;
    int min = 0;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
      if(s[i] == 'A') A++;
      if(s[i] == 'B') B++;
      if(s[i] == 'C') C++;
      if(s[i] == 'D') D++;
      if(s[i] == 'E') E++;
      if(s[i] == 'F') F++;
      if(s[i] == 'G') G++;
    }
    
    if(A < m){
      min += m - A;
    }
    if(B < m){
      min += m - B;
    }
    if(C < m){
      min += m - C;
    }
    if (D < m){
      min += m - D;
    }
    if(E < m){
      min += m - E;
    }
    if(F < m){
      min += m - F;
    }
    if(G < m){
      min += m - G;
    }

    cout << min << endl;
  }
  return 0;
}
