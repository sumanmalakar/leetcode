#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
  vector<int> v;
  int i, j;
  for (i = 0; i < nums1.size(); i++)
  {
    for (j = 0; j < nums2.size(); j++)
    {

      if (nums1[i] == nums2[j])
      {
        if (nums2[j] < nums2[j + 1])
        {
          v.push_back(nums2[j + 1]);
          break;
        }
        else{
          v.push_back(-1);
          break;
        }
      }
    }
  
  }
  return v;
}

int main()
{
  vector<int> v1 = {1,5,7};
  vector<int> v2 = {1,2,5,6,7};
  vector<int> v3 = nextGreaterElement(v1, v2);

  for (int i = 0; i < v3.size(); i++)
  {
    cout << v3[i] << " ";
  }

  return 0;
}