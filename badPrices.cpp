#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<int> days;

int main() {_
  int t; cin >> t;

  while(t--){
    int n; cin >> n;
    days.resize(n);

    for(int i = 0; i < days.size(); i++){
      cin >> days[i];
    }

    int min = days[days.size()-1];
    int badDays = 0;
    for(int i = days.size()-2; i >= 0; i--){
      if(days[i] > min){
        badDays++;
      }

      if(days[i] < min){
        min = days[i];
      }
    }

    cout << badDays << endl;
  }

  return 0;
}

