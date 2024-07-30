#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
  int t; cin >> t;
  while(t--){
    int n, f, k;
    int fav;
    int contFav = 0, afterContFav = 0;
    cin >> n >> f >> k;
    vector<int> cubes(n+10);    
    for(int i = 0; i < n; i++){
      cin >> cubes[i];
    }
    f--;

    fav = cubes[f];

    sort(cubes.begin(), cubes.begin() + n, greater<int>());
    
    for(int i = 0; i < n; i++){
      if(cubes[i] == fav){
        contFav++;
      }    
    }
    
    cubes.erase(cubes.begin(), cubes.begin() + k);

    for(int i = 0; i < cubes.size(); i++){
      if(cubes[i] == fav){
        afterContFav++;
      }
    }
    
    if(contFav == afterContFav) cout << "NO" << endl;
    else if(afterContFav == 0) cout << "YES" << endl;
    else cout << "MAYBE" << endl;
  }

  return 0;
}
