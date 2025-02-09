#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 100100;

int vet[MAXV];
int one[MAXV];
int two[MAXV];
int three[MAXV];

int main()
{
    _ int n, q;
    cin >> n >> q;
    one[0] = 0, two[0] = 0, three[0] = 0, vet[0] = 0;
    for (int i = 1; i <= n; i++)
          cin >> vet[i];
    
    for(int i = 1; i <= n; i++){
      if(vet[i] == 1){
        one[i] = one[i-1] + 1;
        two[i] = two[i-1];
        three[i] = three[i-1];
      }
      else if(vet[i] == 2){
        one[i] = one[i-1];
        two[i] = two[i-1] + 1;
        three[i] = three[i-1];
      }
      else if(vet[i] == 3){
        one[i] = one[i-1];
        two[i] = two[i-1];
        three[i] = three[i-1] + 1;
      }
    }

    while(q--){
      int l, r; cin >> l >> r;
      cout << one[r] - one[l-1] << " ";
      cout << two[r] - two[l-1] << " ";
      cout << three[r] - three[l-1] << " ";
      cout << endl;
    }
    return 0;
}
