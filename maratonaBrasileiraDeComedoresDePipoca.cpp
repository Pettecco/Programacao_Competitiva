#include <bits/stdc++.h>
using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;

const int MAX = 1e5 + 10;
int N, C, T;
int pipocas[MAX];

bool possivel(ll chute)
{
    int comp = 1; // qnt de competidores que eu preciso usar
    ll resta = T * chute;
    for (int i = 0; i < N; i++)
    {
        if (resta >= pipocas[i])
        {
            resta -= pipocas[i];
        }
        else
        {
            comp++;
            resta = T * chute;
            i--;
        }
        if (comp > C)
            return false;
    }
    return true;
}

int main()
{
    _

            cin >>
        N >> C >> T;
    for (int i = 0; i < N; i++)
    {
        cin >> pipocas[i];
    }

    int l = 0, r = 1e9 + 10;
    while (l < r)
    {
        int m = (l + r) / 2;

        if (!possivel(m))
        {
            l = m + 1;
        }
        else
        {
            r = m;
        }
    }
    cout << l << endl;
}