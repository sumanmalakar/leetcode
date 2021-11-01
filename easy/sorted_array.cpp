#include <iostream>
#include <vector>
using namespace std;
vector<int> sortArrayByParityII(vector<int> &nums)
{ // 3,5,4,2 -> 4,5,2,3 ||4, 2, 5, 7
  int s = nums.size();
  int i, j;
  vector<int> v;
  for (i = 0; i < s; i = i + 2)
  {
    if (nums[i] % 2 == 0)
    {
      v.push_back(nums[i]);
    }
    // else
    // {
    //   v.push_back(nums[i]);
    // }
  }
  if (i == s)
  {
    for (j = 1; j < s; j = j + 2)
    {

      if (nums[j] % 2 == 0)
      {
        v.push_back(nums[j]);
      }
      else
      {
        v.push_back(nums[j]);
      }
    }
  }
  if (j == s + 1)
  {
    {
      if (v.size() < s)
        v.push_back(nums[i - s]);
    }
  }
  return v;
}

int main()
{
  vector<int> v = {3,5,8,0,7,2};
  vector<int> s = sortArrayByParityII(v);
  for (int i = 0; i < s.size(); i++)
  {
    cout << s[i] << " ";
  }
  return 0;
}