#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {

    int np, nc, f, custo;
    cin >> np >> nc >> f;
    int v[np], baixo = 0, alto = 0;
    for (int i = 0; i < np; i++)
    {
      cin >> v[i];
      baixo = max(baixo, v[i]); // MAIOR ELEMENTO
      alto += v[i];             // SOMA
    }
    int resp = -1;
    while (!(alto < baixo))
    {
      int meio = (baixo + alto) / 2; // limite de peso atual
      int acc = 0;                   // peso do caminhao atual
      int ctc = 1;                   // contagem de caminhoes necessarios

      for (int i = 0; i < np; i++)
      {
        acc += v[i];
        if (acc > meio)
        {
          ctc++; // mais um caminhao
          acc = v[i];
        }
      }

      if (ctc > nc)       // nao deu
        baixo = meio + 1; // testo com mais
      else                // se deu
      {
        resp = meio;     // salvo a resposta e
        alto = meio - 1; // testo com menos
      }
    }
    custo = (resp * f) * nc;
    cout << resp << " $" << custo << endl;
  }

  return 0;
}
