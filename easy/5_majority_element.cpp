#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{
  int s = nums.size();
  int k = nums[0];
  int count;
  for (int i = 0; i < s; i++)
  {
    count = 1;
    for (int j = i + 1; j < s; j++)
    {
      if (nums[i] == nums[j])
      {
        count = count + 1;
        k = nums[i];
      }
      if (count > s / 2)
      {
        break;
      }
    }

    if (count > s / 2)
    {
      break;
    }
  }
  return k;
}

int main()
{

  vector<int> v = {6,2,2,4,2,2,4};
  cout << majorityElement(v);

  return 0;
}