#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int n, m; cin >> n >> m;

  vector<int> a(n);
  vector<int> b(m);
  
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  for(int j = 0; j < m; j++){
    cin >> b[j];
  }

  int i = 0, j = 0;
  ll count = 0;

  while(i < n && j < m){
    if(a[i] == b[j]){
      int ai = a[i];
      int count_a = 0, count_b = 0;
      while(a[i] == ai && i < n) {
        count_a++;
        i++;
      }
      while(b[j] == ai && j < m){
        count_b++;
        j++;
      }

      count += (ll) count_a * count_b;
    } else if(a[i] < b[j]){
      i++;
    } else{
      j++;
    }
  }

  cout << count << endl;
  return 0;
}

