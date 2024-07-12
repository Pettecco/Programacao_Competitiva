#include <iostream>

using namespace std;

int main()
{
  int x, y, aux;
  int soma;

  cin >> x >> y;
  while (x > 0 && y > 0)
  {
    soma = 0;

    if (x > y)
    {
      aux = y;
      y = x;
      x = aux;
    }

    for (int j = x; j <= y; j++)
    {
      cout << j << " ";
      soma += j;
    }

    cout << "Sum=" << soma << endl;

    cin >> x >> y;
  }
  return 0;
}
