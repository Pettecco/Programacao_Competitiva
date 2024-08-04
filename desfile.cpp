#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 1e6+10;

int patos[MAXV];

int main(){_
  int n;
  while(cin >> n && n != 0){
    
    for(int i = 0; i < MAXV; i++){
      patos[i] = 0;
    }

    for(int i = 0; i < n; i++){
      int aux; cin >> aux;
      patos[aux] += 1;
    }

    int maj = -1;
    int pos;
    for(int i = 0; i < MAXV; i++){
      if(patos[i] > maj){
        maj = patos[i];
        pos = i;
      }
    } 
    cout << pos << endl;
  }

  return 0;
}
