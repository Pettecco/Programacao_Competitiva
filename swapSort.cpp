#include <iostream>
#include <vector>
#include <utility>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int MAXV = 3010;
vector<int> nums;
vector<pair<int, int>> ans;

int main() {_
    int n;
    cin >> n;
    nums.resize(n);  
    
    for(int i = 0; i < n; i++)
      cin >> nums[i];

    for(int i = 0; i < n; i++){
      int j = i;
      for(int t = i; t < n; t++){
        if(nums[j] > nums[t]) j = t;
      }

      if(i != j)
        ans.push_back(make_pair(i, j));
      swap(nums[i], nums[j]);
    }
  
    cout << ans.size() << endl;
    for(auto w : ans){
      cout << w.first << " " << w.second << endl;
    }

    return 0;
}
