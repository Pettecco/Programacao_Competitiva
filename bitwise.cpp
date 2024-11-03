#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for(int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    _ 
    int a, k; 
    cin >> a >> k;

    int and_ = 0, or_ = 0, xor_ = 0;
    for(int i = 1; i <= a; i++) {
        for(int j = i + 1; j <= a; j++) {
            if ((i & j) < k) {
                and_ = max(and_, i & j);
            }
            if ((i | j) < k) {
                or_ = max(or_, i | j);
            }
            if ((i ^ j) < k) {
                xor_ = max(xor_, i ^ j);
            }
        }
    }

    cout << and_ << endl;
    cout << or_ << endl;
    cout << xor_ << endl;

    return 0;
}

