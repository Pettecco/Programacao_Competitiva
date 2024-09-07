#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
  int t; cin >> t;
  while(t--){
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int maxA = 0, currA;

    currA = x*b;
    if(currA > maxA) maxA = currA;    
    currA = (a-1-x)*b;
    if(currA > maxA) maxA = currA;   
    currA = a*y;
    if(currA > maxA) maxA = currA;   
    currA = a*(b-1-y);
    if(currA > maxA) maxA = currA;   

    cout << maxA << endl;

  }
  return 0;
}