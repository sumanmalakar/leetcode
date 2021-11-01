#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

//input = {1, 0, 1, 2, 0, 2};
//output = { 0,0,1,1,2,2};

void sort_f(vector<int> &nums)
{ 
  int i =0;
  int j =0;
  int k = nums.size()-1;
  while(i<=k){
    if(nums[i]==1){
      i++;
    }else if(nums[i]==0){
      swap(nums[i],nums[j]);
      i++;
      j++;
    }
    else if(nums[i]==2){
      swap(nums[i],nums[k]);
      k--;
    }
  }
  // sort(v.begin(), v.end());

}

int main()
{
  vector<int> v = {1,0,1,2,0,2};
  // sort_f(v);
  // sort(v.end(),v.begin());
  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}