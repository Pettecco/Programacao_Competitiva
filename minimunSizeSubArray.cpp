class Solution
{
public:
  bool possivel(int chute, int target, vector<int> &nums, vector<int> &prefix_sum)
  {
    for (int i = 0; i + chute <= nums.size(); i++)
    {
      if (prefix_sum[i + chute] - prefix_sum[i] >= target)
      {
        return true;
      }
    }
    return false;
  }

  int minSubArrayLen(int target, vector<int> &nums)
  {
    vector<int> prefix_sum(nums.size() + 1, 0);
    for (int i = 0; i < nums.size(); i++)
    {
      prefix_sum[i + 1] = prefix_sum[i] + nums[i];
    }

    int l = 1, r = nums.size() + 1;
    while (l < r)
    {
      int m = (l + r) / 2;
      if (!possivel(m, target, nums, prefix_sum))
      {
        l = m + 1;
      }
      else
      {
        r = m;
      }
    }

    return (l == nums.size() + 1) ? 0 : l;
  }
};
