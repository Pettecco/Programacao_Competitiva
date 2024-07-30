#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

const int MAXV = 1e5 + 10;

int vect[MAXV];
int n, k, x;

int bs(int x) {
    int l = 0;
    int r = n - 1;
    int result = -1; 
    
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (vect[mid] <= x) {
            result = mid; 
            l = mid + 1; 
        } else {
            r = mid - 1; 
        }
    }
    
    if (result == -1) {
        return 0;
    } else {
        return result + 1;
    }
}

int main() {_
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> vect[i];
    }
    while (k--) {
        cin >> x;
        cout << bs(x) << endl;
    }
    return 0;
}

