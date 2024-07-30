#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  int t, n; 
  cin >> t;
  string s;

  while(t--) {
    cin >> n;
    cin.ignore(); 
    
    getline(cin, s);

    int cont = 0;
    for(int i = 0; i < n-2; i++) {
      if(i+4 < n){
          if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p' && s[i+3] == 'i' && s[i+4] == 'e'){
          cont++;
          i+=3;
          continue;
        }
      }
      if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p'){
        cont++;
      }
      if(s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e'){
        cont++;
      }
    }

    cout << cont << endl;
  }
  return 0;
}

