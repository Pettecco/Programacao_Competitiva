#include <bits/stdc++.h>

using namespace std;

struct gift
{
  string g1, g2, g3; // os 3 presentes desejados pela pessoa

  void procurar(string presente)
  {
    if (presente == g1 || presente == g2 || presente == g3)
      cout << "Uhul! Seu amigo secreto vai adorar o/" << endl;
    else
      cout << "Tente Novamente!" << endl;
  }
};

int main()
{
  int n;                  // numero de pessoas que vao participar
  map<string, gift> mapa; // guarda o nome e os presentes do participante
  string nome, g1, g2, g3, presente;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> nome >> g1 >> g2 >> g3;
    mapa[nome] = {g1, g2, g3};
  }

  while (cin >> nome)
  {
    cin >> presente;
    mapa[nome].procurar(presente);
  }

  return 0;
}