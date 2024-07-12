#include <bits/stdc++.h>
#define MAX 10001

using namespace std;

int buscaBinariaEsquerda(int *vet, int x, int tamanhoVetor)
{

  int left = 0;
  int right = tamanhoVetor - 1;
  int ans = -1;

  while (left <= right)
  {
    int mid = (right + left) / 2;

    if (vet[mid] == x)
    {
      ans = mid;
      right = mid - 1; // continua a busca para a esquerda
    }
    else if (vet[mid] > x)
    {
      right = mid - 1;
    }
    else
    {
      left = mid + 1;
    }
  }
  return ans;
}

int buscaBinariaDireita(int *vet, int x, int tamanhoVetor)
{
  int left = 0;
  int right = tamanhoVetor - 1;
  int ans = -1;

  while (left <= right)
  {
    int mid = (right + left) / 2;

    if (vet[mid] == x)
    {
      ans = mid;
      left = mid + 1; // continua a busca para a direita
    }
    else if (vet[mid] > x)
    {
      right = mid - 1;
    }
    else
    {
      left = mid + 1;
    }
  }

  return ans;
}

int main()
{
  int n, x, y;

  int fOcorrencia, lOcorrencia;
  while (cin >> n)
  {

    int vet[MAX];
    int tamanhoVetor = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> x >> y;

      for (int j = x; j <= y; j++)
      {
        vet[tamanhoVetor] = j;
        tamanhoVetor++;
      }
    }

    cin >> x;

    sort(vet, vet + tamanhoVetor);

    fOcorrencia = buscaBinariaEsquerda(vet, x, tamanhoVetor);
    lOcorrencia = buscaBinariaDireita(vet, x, tamanhoVetor);

    if (fOcorrencia == -1 || lOcorrencia == -1)
    {
      cout << x << " not found" << endl;
    }
    else
    {
      cout << x << " found from " << fOcorrencia << " to " << lOcorrencia << endl;
    }
  }
  return 0;
}
