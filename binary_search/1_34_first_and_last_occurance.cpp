#include<bits/stdc++.h>
using namespace std;
//this code is accepted on leetcode
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/

int binary_search(vector<int> &arr, int k, bool index)
{
  int result = -1;
  int s = 0;
  int e = arr.size() - 1;
  while (s <= e)
  {
    int mid = (s + e) / 2;
    if (arr[mid] == k)
    {
      if (index)
      {
        result = mid;
        e = mid - 1;
      }
      else
      {
        result = mid;
        s = mid + 1;
      }
    }
    else if (arr[mid] > k)
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }
  return result;
}

vector<int> searchRange(vector<int> &nums, int target)
{
  vector<int> v;

  if(nums.size()==0){
    v.push_back(-1);
    v.push_back(-1);
    return v;
  }else{
  int index_first = binary_search(nums, target, true);
  int index_last = binary_search(nums, target, false);
  v.push_back(index_first);
  v.push_back(index_last);

 return v;
}
}

int main(){
  vector<int>arr = {2,4,6,7,10,10,10,11,21};
  int k= 2;
  vector<int>result = searchRange(arr, k);
  for(int i=0; i<result.size(); i++){
    cout<<result[i]<<" ";
  }
}