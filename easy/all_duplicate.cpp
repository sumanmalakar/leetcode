#include<iostream> 
#include<bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int> &nums)
{
  vector<int> null = {};
  vector<int> n;
  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == nums[i + 1])
    {
      n.push_back(nums[i]);
      i = i + 1;
    }
  }
  if (n.size() == 0)
  {
    return null;
  }
  else
  {
    return n;
  }
}
 int main(){
vector<int> v = { 1,3,4,2,5 };
vector<int> n = findDuplicates(v);
for(int i=0; i<n.size(); i++){
  cout<<n[i]<<" ";
}

return 0;
}