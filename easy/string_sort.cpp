#include <iostream>
#include <vector>

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<string> nums =
  { "5","-2","20","3","10" }; 

      int target = 3;
  string k;
  // for (int i = 0; i < nums.size(); i++)
  // {  
  //   for (int j = i + 1; j < nums.size(); j++)
  //   {
  //     if (stoi(nums[i]) < stoi(nums[j]))
  //     {
  //       string temp = nums[i];
  //       nums[i] = nums[j];
  //       nums[j] = temp;
  //     }
  //   }
  // }
  sort(nums.begin(), nums.end());
    
    for(int i=0; i<nums.size(); i++){
      cout<<nums[i]<<" ";
    }


  k = nums[target-1];

 cout<<endl<<k;

  return 0;
}