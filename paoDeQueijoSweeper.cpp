#include <iostream>

using namespace std;

int calcula(int **mat, int n, int m, int i, int j)
{
  int soma = 0;
  int l = n - 1;
  int c = m - 1;
  if (i > 0 && mat[i - 1][j] == 1)
    soma++;
  if (i < l && mat[i + 1][j] == 1)
    soma++;
  if (j > 0 && mat[i][j - 1] == 1)
    soma++;
  if (j < c && mat[i][j + 1] == 1)
    soma++;

  return soma;
}

int main()
{
  int n, m;

  while (cin >> n >> m)
  {
    // Alocação dinâmica da matriz
    int **mat = new int *[n];
    for (int i = 0; i < n; ++i)
    {
      mat[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        cin >> mat[i][j];

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (mat[i][j] == 1)
          cout << "9";
        else
          cout << calcula(mat, n, m, i, j);
      }
      cout << endl;
    }

    // Liberar memória alocada
    for (int i = 0; i < n; ++i)
    {
      delete[] mat[i];
    }
    delete[] mat;
  }

  return 0;
}
