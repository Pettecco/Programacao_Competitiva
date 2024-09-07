#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int n; cin >> n;
  ll p, soma = 0;

  vector<ll> cap;
  for(int i = 0; i < n; i++){
    cin >> p;
    cap.push_back(p);
  }
  sort(cap.begin(), cap.end());

  for(int i = 0; i < n; i++){
    if(soma + 1 < cap[i]){
      cout << soma + 1 << endl;
      soma = -1;
      break;
    }
    else{
      soma += cap[i];
    }
  }

  if(soma != -1){
    cout << soma + 1 << endl;
  }

  return 0;
}