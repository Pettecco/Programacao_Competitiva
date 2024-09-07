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
  _ int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    bool primo = true;
    for (ll j = 2; j * j <= x; j++)
    {
      if (x % j == 0)
        primo = false;
    }

    if (primo)
      cout << "Prime" << endl;
    else
      cout << "Not Prime" << endl;
  }

  return 0;
}