#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int MAXV = 1e5+10;

int vect[MAXV];
int n, k, x;

int bs(int x){
    int l = 0;
    int r = n;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (vect[mid] >= x) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    if (l < n && vect[l] >= x) {
        return l + 1; // base 1
    } else {
        return n + 1; 
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

