#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

const int MAXV = 1e5 + 10;

vector<int> vet(MAXV);
ll prefixSum[MAXV];
ll orderedPrefixSum[MAXV];

int main() {_
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> vet[i];
    }
    
    for(int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + vet[i];
    }

    vector<int> orderedVet = vet;
    sort(orderedVet.begin() + 1, orderedVet.begin() + n + 1);

    for(int i = 1; i <= n; i++) {
        orderedPrefixSum[i] = orderedPrefixSum[i - 1] + orderedVet[i];
    }

    int q;
    cin >> q;
    while(q--) {
        int op, l, r;
        cin >> op >> l >> r;
        if(op == 1) {
            cout << prefixSum[r] - prefixSum[l - 1] << endl;
        } else {
            cout << orderedPrefixSum[r] - orderedPrefixSum[l - 1] << endl;
        }
    }

    return 0;
}
