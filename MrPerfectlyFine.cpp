#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
    int t; 
    cin >> t;
    while (t--) {
        vector<pair<int, string>> books;
        int n; 
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            int min_time; 
            string skills;
            cin >> min_time >> skills;
            if (skills != "00") {
                books.push_back({min_time, skills});
            }
        }
        
        sort(books.begin(), books.end());

        ll ans = LINF;
        int first = INF, second = INF, both = INF;

        for (auto w : books) {
            int time = w.first;
            string skills = w.second;

            if (skills == "11") {
                both = min(both, time);
            } else if (skills == "10") {
                first = min(first, time);
            } else if (skills == "01") {
                second = min(second, time);
            }
        }
        if (first != INF && second != INF) {
            ans = min(ans, (ll)(first + second));
        }
        if (both != INF) {
            ans = min(ans, (ll)both);
        }

        if (ans == LINF) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}

