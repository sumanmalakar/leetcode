#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

 int main(){
   vector<int> nums1 = { 0};

   sort(nums1.begin(), nums1.end());

   for (int i = 0; i < nums1.size(); i++)
   {
     if (nums1[i] == 0)
     {
       nums1.erase(nums1.begin() + i);
       i = i - 1;
     }
  }


  for (int i = 0; i < nums1.size(); i++)
  {
    cout<<nums1[i]<<" ";
  
  }

return 0;
}