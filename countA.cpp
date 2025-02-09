#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = 1e5 + 10;
int prefixSum[MAXV];

int main()
{
    _ string s;
    cin >> s;
    int count = 0;
    prefixSum[0] = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            count++;
        prefixSum[i + 1] = count;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << prefixSum[r] - prefixSum[l - 1] << endl;
    }
    return 0;
}
