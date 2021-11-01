#include<iostream> 
#include<vector>
using namespace std;
int maxSubArray(vector<int> &nums)
{
  int cs = 0;
  int max_sum = 0;
  int count = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] < 0)
    {
      count++;
    }
  }
  if (count == nums.size())
  {
    max_sum = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
      cs = cs + nums[i];
      if (cs < 0)
      {
        cs = nums[i];
      }

      max_sum = max(max_sum, cs);
    }
    return max_sum;
  }

  for (int i = 0; i < nums.size(); i++)
  {
    cs = cs + nums[i];
    if (cs < 0)
    {
      cs = 0;
    }
    max_sum = max(max_sum, cs);
  }
  return max_sum;
}

  int main()
  { vector<int> v = {-5,-6,-7,-6,-7,-9,-3};
  cout<<maxSubArray(v);

    return 0;
  }