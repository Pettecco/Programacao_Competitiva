#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for(int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int main(){_
  
  int a, b;
  while(cin >> a >> b && (a + b)){
    set<int> alice;
    set<int> beatriz;
    set<int>::iterator it;
    set<int>::iterator itr;
    int x;
    int aux1, aux2, troca = 0;
    rep(i, 0, a)
    {
      cin >> x;
      alice.insert(x);
    }
    rep(i, 0, b)
    {
      cin >> x;
      beatriz.insert(x);
    }
    
    itr = beatriz.begin();
    it = alice.begin();
    while(true){
      aux1 = alice.count(*itr);
      aux2 = beatriz.count(*it);
    
      if(itr == beatriz.end() || it == alice.end()) break;

      if(aux1 == 0 && aux2 == 0){
        troca++;
        itr++;
        it++;
      } else if(aux1 == 1 && aux2 == 0){
        itr++;
      } else if(aux1 == 0 && aux2 == 1){
        it++;
      } else{
        itr++;
        it++;
      }
    }
    
    cout << troca << endl;
  }

  return 0;
}
