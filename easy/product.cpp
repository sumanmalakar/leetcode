#include<iostream> 
#include<vector>
using namespace std;
int arraySign(vector<int> &nums)
{
  int k;
  int count = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == 0)
    {
      return 0;
    }
    else if (nums[i] < 0)
    {
      count++;
    }
  }

  if (count % 2 == 0)
  {
    k = 1;
  }
  else
  {
    k = -1;
  }

  return k;
}
 int main(){
   vector<int> v = {9, 72, 34, 29, -49, -22, -77, -17, -66, -75, -44, -30, -24};
   cout<<arraySign(v);

  

return 0;
}