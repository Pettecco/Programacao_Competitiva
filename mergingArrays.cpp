#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
    int n, m; cin >> n >> m;
    vector<int> nums1(n);
    vector<int> nums2(m);

    for(int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> nums2[i];
    }
    
    int i = 0, j = 0;
    while(i < n && j < m) {
        if(nums1[i] <= nums2[j]) {
            cout << nums1[i] << " ";
            i++;
        } else {
            cout << nums2[j] << " ";
            j++;
        }
    }
    
    while(i < n) {
        cout << nums1[i] << " ";
        i++;
    }
    while(j < m) {
        cout << nums2[j] << " ";
        j++;
    }
    
     
    return 0;
}

