class Solution
{
public:
  bool isPossible(const vector<int> &piles, int h, int mid)
  {
    int totalHours = 0;
    for (int i = 0; i < piles.size(); ++i)
    {
      totalHours += (piles[i] + mid - 1) / mid;
    }
    return totalHours <= h;
  }

  int minEatingSpeed(vector<int> &piles, int h)
  {
    int l = 1;
    int r;
    for (int num : piles)
    {
      r = max(r, num);
    }

    while (l < r)
    {
      int mid = l + (r - l) / 2;

      if (!isPossible(piles, h, mid))
      {
        l = mid + 1;
      }
      else
      {
        r = mid;
      }
    }

    return l;
  }
};