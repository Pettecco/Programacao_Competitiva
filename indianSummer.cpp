#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

const int MAXV = 110;

vector<pair<string, string>> leaves(MAXV);

int main() {_
    int n;
    cin >> n;
    
    // Lê as folhas com nome e cor
    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        leaves[i] = {s1, s2};
    }
    
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    
    int ans = n;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (leaves[i] == leaves[j]) {
                ans--;
                break;  
            }
        }
    }
    
    if (ans == 0) {
        ans = 1;
    }
    
    cout << ans << endl;
    return 0;
}

