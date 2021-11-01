#include<iostream> 
#include<vector>

// #include <bits/stdc++.h>
using namespace std;

 int main(){
vector<int> nums = {2,2,6,6,6,4,5,5,7,5,3,4,3};
   int k; int count =0 ;
for (int i = 0; i < nums.size(); i++)
{
  for (int j = i + 1; j < nums.size(); j++)
  {
    if(nums[i]>nums[j]){
      int temp = nums[i];
      nums[i] = nums[j];
      nums[j] = temp;
    }
  }
}
 

int s = nums.size();

for(int i=s-1; i>=0; i--){
  if(nums[i]==nums[i-1]){
    continue;
  }
  count = count + 1;
  if(count == 3){
    k = nums[i];
    break;
  }
}

int s2 = nums.size();

if(s2<3){
  k =  nums[s-1];
}
else{
  k ;
}

cout<<k;
  

return 0;
}