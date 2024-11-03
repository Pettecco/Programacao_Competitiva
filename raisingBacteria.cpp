#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int bacteria = 0;

  cin >> n;
  while(n){
    if(n&1) bacteria++;
    n >>= 1;
  }
  cout << bacteria << endl;
}
