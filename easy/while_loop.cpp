#include<iostream> 
#include<vector>
using namespace std;
int findNumbers(vector<int> &nums)
{
  int i, k, count1 = 0, count = 0;
  for (i = 0; i < nums.size(); i++)
  {
    k = nums[i];
    if (k > 9)
    {
      while (k != 0)
      {
        k = k / 10;
        count1 = count1 + 1;
      }
    }
    if (count1 != 0)
    {
      if (count1 % 2 == 0)
      {
        count = count + 1;
      }
    }
  }
  return count;
}

 int main(){
   vector<int> nums = {3, 34, 5, 66789, 23345, 6788};
  //  cout<<findNumbers(v);
   int i, k, count1, count = 0;
   for (i = 0; i < nums.size(); i++)
   { count1 = 0;
     k = nums[i];
     if (k > 9)
     {
       while (k != 0)
       {
         k = k / 10;
         count1 = count1 + 1;
       } cout<<count1<<" ";
     }
     if (count1 != 0)
     {
       if (count1 % 2 == 0)
       {
         count = count + 1;
       }
     }
   }
   cout<<endl;
   cout<<count;
}