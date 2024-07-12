#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  set<int> s;
  set<int>::iterator it;
  int x;

  while (cin >> n)
  {
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      s.insert(x);
    }

    for (it = s.begin(); it != s.end(); it++)
    {
      if (*it <= 9)
      {
        cout << "000" << *it << endl;
      }
      else if (*it <= 99)
      {
        cout << "00" << *it << endl;
      }
      else if (*it <= 999)
      {
        cout << "0" << *it << endl;
      }
      else
      {
        cout << *it << endl;
      }
    }

    s.clear();
  }

  return 0;
}