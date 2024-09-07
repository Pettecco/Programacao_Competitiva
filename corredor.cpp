#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 50500;

int corr[MAXV];
vector<int> gul;

int main() {_
  int n; cin >> n;
  for(int i = 0; i < n; i++){
    cin >> corr[i];
    if(corr[i] > 0){
      gul.push_back(i);
    }
  }

  int maxSum = 0, currentSum;

  for(int i = 0; i < gul.size(); i++){
    currentSum = 0;
    for(int j = gul[i]; j < n;j++){
      currentSum += corr[j];
      if(currentSum > maxSum) maxSum = currentSum;
    }
  }

  cout << maxSum << endl;

  return 0;
}