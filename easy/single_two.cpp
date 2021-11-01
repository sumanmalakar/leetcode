#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int> &nums)
{
  int i, j, count, k;
  for (i = 0; i < nums.size(); i++)
  {
    for (j = i + 1; j < nums.size(); j++)
    {
      if (nums[i] > nums[j])
      {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }

  for (int i = 0; i < nums.size(); i++)
  {
    count = 1;
    for (int j = i + 1; j < nums.size(); j++)
    {
      if (nums[i] == nums[j])
      {
        count = count + 1;
        if (count == 3)
        {
          i = i + 3;
          break;
        }
      }
      else
      {
        break;
      }
    }
    k = nums[i];
    break;
  }
  return k;
}

int main()
{
  vector<int> nums = {2, 2, 3, 2};
  int i, j, count, k;
  for (i = 0; i < nums.size(); i++)
  {
    for (j = i + 1; j < nums.size(); j++)
    {
      if (nums[i] > nums[j])
      {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }

  for (int i = 0; i < nums.size(); i++)
  { 
    count = 1;
    for (int j = i + 1; j < nums.size(); j++)
    {
      if (nums[i] == nums[j])
      {
        count = count + 1;
        if (count == 3)
        {  i = i+2;
           break; }}
      else{
        k = nums[i];
        break;
      } 
    }
    if(count == 1){
      k = nums[i];
      break;
    }
  }

cout<<endl<<k;
// return k;



  return 0;
}