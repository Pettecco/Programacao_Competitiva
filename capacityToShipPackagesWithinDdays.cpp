class Solution
{
public:
  int shipWithinDays(vector<int> &weights, int days)
  {
    int soma = 0;
    int maior = weights[0];

    for (int i = 0; i < weights.size(); i++)
    {
      soma += weights[i];
      if (weights[i] > maior)
      {
        maior = weights[i];
      }
    }

    int l = maior;
    int h = soma;

    while (l <= h)
    {
      int mid = (l + h) / 2;
      if (finDays(weights, mid) <= days)
      {
        h = mid - 1;
      }
      else
      {
        l = mid + 1;
      }
    }
    return l;
  }

  int finDays(vector<int> &weights, int weight)
  {
    int dia = 0;

    for (int i = 0; i < weights.size(); i++)
    {
      int cont = 0;
      while (i < weights.size() && (cont + weights[i]) <= weight)
      {
        cont += weights[i];
        i++;
      }
      dia++;
      i--;
    }
    return dia;
  }
};