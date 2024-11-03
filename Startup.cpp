#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define rep(i, a, b) for(int i = a; i < b; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, k;
        cin >> n >> k; 
        unordered_map<int, ll> bottles;

        for (int i = 0; i < k; i++) {
            int b, c;
            cin >> b >> c;
            bottles[b] += c; 
        }

        vector<long long> prices;
        for (auto a : bottles) {
            prices.push_back(a.second);
        }

        sort(prices.rbegin(), prices.rend());

        ll maxSum = 0;
        for (int i = 0; i < min(n, (int)prices.size()); i++) {
            maxSum += prices[i];
        }

        cout << maxSum << endl; 
    }

    return 0;
}
