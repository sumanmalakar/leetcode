#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
  int i, j;
  int s = nums.size();
  int k;

  for (i = 0; i < s; i++)
  {
    for (j = 0; j < s; j++)
    {
      if (i == j)
      {
        continue;
      }
      if (nums[i] == nums[j])
      {
        break;
      }
    }
    if (j == s)
    {
      k = nums[i];
      break;
    }
  }
  return k;
}

int main()
{
  vector<int> v = { 4, 1, 2, 1, 2 };
  cout << singleNumber(v);
  return 0;
}