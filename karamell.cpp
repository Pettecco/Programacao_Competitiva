#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for(int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 110;
const int MAXVSUM = 10010;


vector<int> alice, bob;
int pd[MAXV][MAXVSUM], mat[MAXV][MAXVSUM], n, a[MAXV], soma;


int solve(int p, int t){
  if(p == n){ // Percorreu todo o array
    return t*2 == soma;  // É uma resposta valida se Alice tem exatamente metade dos doces
  }

  if(pd[p][t] != -1){ // Já calculado, retorna a resposta salva na matriz
    return pd[p][t];
  }

  int x = solve(p+1, t+a[p]); // alice pega o doce
  int y = solve(p+1, t); // alice não pega o doce

   if(x){                              // Alice ficar com o doce da posição 'p' é uma possivel solução
    mat[p][t] = 1;
   }


   return pd[p][t] = x or y;
}


// reconstroi o caminho pra solução valida
void reconstruct(int p, int t){
  if(p == n) return;

  if(mat[p][t]){
    alice.push_back(a[p]);
    reconstruct(p+1, t+a[p]);
  }
  else{
    bob.push_back(a[p]);
    reconstruct(p+1, t);
  }
}


int main(){
  _ cin >> n;

  for(int i = 0; i < n; i++){
      cin >> a[i];
      soma += a[i];
  }

  memset(pd, -1, sizeof pd);     

  if(soma&1 or !solve(0,0)){
    cout << -1 << endl;
    return 0;
  }

  reconstruct(0, 0);
  int cnt_a = 0, cnt_b = 0;
    
  for(int i = 0, j = 0; i < alice.size(); i++) {
      cout << alice[i] << " ";
      cnt_a += alice[i];
        
      while(cnt_b < cnt_a)
      {
          cout << bob[j] << " ";
          cnt_b += bob[j];
          j++;
      }
    }
  
  cout << endl;

  return 0;
}
