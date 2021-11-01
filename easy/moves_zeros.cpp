#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int> &nums)
{
  int s = nums.size();
  int i,j;
 
  for ( i = 0; i < s; i++)
  { 
    if (nums[i] == 0)
    {
      
      for ( j = i; j < s; j++)
      {
        if (nums[j] == 0 && j == s - 1)
        {
          continue;
        }
        if (nums[j] == nums[j + 1])
        {
          continue;
        }
        int temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;

      }
      i=i-1;
    }


  }
}

int main()
{

  // vector<int> v = {0,1,0,3,12};
  vector<int> v = {0, 0, 1, 3, 12};

  // vector<int> v = {0,0,1};

  moveZeroes(v);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}