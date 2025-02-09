#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAXV = (1.5) * 1e5;

ll vet[MAXV + 10];

int main()
{
    _ int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> vet[i];

    ll current_sum = 0;
    for (int i = 0; i < k; i++)
    {
        current_sum += vet[i];
    }

    ll menor = current_sum;
    int ans = 0;

    for (int i = 1; i <= n - k; i++)
    {
        current_sum -= vet[i - 1];
        current_sum += vet[i + k - 1];

        if (current_sum < menor)
        {
            menor = current_sum;
            ans = i;
        }
    }

    cout << ans + 1 << endl;
    return 0;
}
