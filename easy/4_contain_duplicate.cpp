#include <iostream>
#include <vector>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i + 1; j < nums.size(); j++)
      {
        if (nums[i] == nums[j])
        {
          return true;
        }
      }
    }
    return false;
  
}



int main()
{

  vector<int> v = {1 ,2,3,2,4};
  cout<<containsDuplicate(v);

  return 0;
}