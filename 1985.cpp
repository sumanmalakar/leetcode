#include<iostream> 
#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
string kthLargestNumber(vector<string> &nums, int k)
{
  vector<int> v;
  for (int i = 0; i < nums.size(); i++)
  {
    v.push_back(stoi(nums[i]));
  }
  sort(v.begin(), v.end());
  int s = v.size();
 int re =  v[s - k];
 string strk =  to_string(re);

return strk;
}

 int main(){
   vector<string>v = {"2","3","4"};
  int k = 4;
cout<<kthLargestNumber(v,k);

return 0;

   }

// cout<<s[0]+3;
  

