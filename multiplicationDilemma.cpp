#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{
  _ int t;
  cin >> t;

  while (t--)
  {
    int n, m, especial, Nespecial;
    cin >> n >> m;

    if (n / 10 == 0 || n % 10 == 0)
    {
      especial = n;
      Nespecial = m;
    }
    else
    {
      especial = m;
      Nespecial = n;
    }

    int a = Nespecial / 10;
    cout << a * 10 << " x " << especial << " + " << Nespecial % 10 << " x " << especial << endl;
  }

  return 0;
}