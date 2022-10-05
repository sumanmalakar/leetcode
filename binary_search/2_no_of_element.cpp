#include <bits/stdc++.h>
using namespace std;


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

int searchRange(vector<int> &nums, int target)
{
  

  if (nums.size() == 0)
  {
 return -1;
  }
  else
  {
    int index_first = binary_search(nums, target, true);
    int index_last = binary_search(nums, target, false);
    int result = index_last - index_first  + 1;

    return result;
  }
}

int main()
{
  vector<int> arr = {2, 4, 6, 7, 10, 10, 10, 11, 21};
  int k = 10;
cout<< searchRange(arr, k);
  
}