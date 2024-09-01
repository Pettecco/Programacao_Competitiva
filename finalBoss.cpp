#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define ull unsigned long long
#define mxx 1e18 - 1
using namespace std;


void solve()
{
    ll k, n;
    cin >> k >> n;
    vector<ll> a(n), c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    ll l = 1;
    ll r = 1e12;
    ll ans = r;
    while (l <= r)
    {
        ll mid = (l + r) / 2ll;
        ll sm = 0;
        for (ll i = 0; i < n; i++)
        {
            ll tot = (mid - 1ll) / c[i];
            tot += 1ll;
            sm += (tot * a[i]);
            if (sm >= k)
            {
                break;
            }
        }
        if (sm >= k)
        {
            ans = min(ans, mid);
            r = mid - 1ll;
        }
        else
        {
            l = mid + 1ll;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}


