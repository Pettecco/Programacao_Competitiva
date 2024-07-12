// muito comico não ser sobre grafos
#include <bits/stdc++.h>

using namespace std;

int main()
{

  set<string> joias;
  string x;

  while (cin >> x)
  {
    joias.insert(x);
  }
  cout << joias.size() << endl;
  joias.clear();
}