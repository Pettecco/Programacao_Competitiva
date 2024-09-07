#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 110;

int M[MAXV][MAXV];

int main() {_
  int n, m; cin >> n >> m;
  
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      cin >> M[i][j];

  int maxSum = 0, sumLine, sumColumn;
  
  for(int i = 0; i < n; i++){
    sumLine = 0;
    for(int j = 0; j < m; j++){
      sumLine += M[i][j];
    }
    if(sumLine > maxSum) maxSum = sumLine;
  }

  for(int i = 0; i < m; i++){
    sumColumn = 0;
    for(int j = 0; j < n; j++){
      sumColumn += M[j][i];
    }
    if(sumColumn > maxSum) maxSum = sumColumn;
  }

  cout << maxSum << endl;

  return 0;
}
