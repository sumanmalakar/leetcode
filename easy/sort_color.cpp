#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> nums = {1,0,0,1,0,2,3,4,1};
  int i, j, m, l;
  int s = nums.size();
  vector<int> v;
  for (i = 0; i < s; i++)
  {
    for (j = i + 1; j < s; j++)
    {
      if (nums[i] == nums[j])
      {
        int temp = nums[i+1];
        nums[i+1] = nums[j];
        nums[j] = temp;
        i = i+1;
      }
    }
  }
 
  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = i + 1; j < nums.size(); j++)
    {
      if (nums[i] > nums[j])
      {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }

//  cout<<endl;

 for (int k = 0; k < nums.size(); k++)
 {
   cout << nums[k] << " ";
 }

  return 0;
}