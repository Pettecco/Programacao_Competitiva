#include <bits/stdc++.h>

using namespace std;

const int MAX = 10e5 + 10;

int vet[MAX];

bool binarySearch(int n, int x)
{
  sort(vet, vet + n);
  int l = 0;
  int r = n - 1;

  while (l <= r)
  {
    int mid = l + (r - l) / 2;
    if (vet[mid] == x)
    {
      return true;
    }
    else if (vet[mid] > x)
    {
      r = mid - 1;
    }
    else
    {
      l = mid + 1;
    }
  }
  return false;
}

int main()
{
  int n, k, x;

  cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    cin >> vet[i];
  }

  for (int i = 0; i < k; i++)
  {
    cin >> x;
    if (binarySearch(n, x))
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
