#include<iostream> 
#include<vector>
using namespace std;
vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
{ int i, j, k;
vector <int> v;
  for (i = 0; i < nums1.size(); i++)
  {
    if (nums1[i] == nums1[i + 1])
    {
      continue;
    }
    for (j = 0; j < nums2.size(); j++)
    {
      if (nums1[i] == nums2[j])
      {
        v.push_back(nums1[i]);
        break;
      }
    }
    if (j == nums2.size())
    {
      for (k = 0; k < nums3.size(); k++)
      {
        if (nums1[i] == nums3[k])
        {
          v.push_back(nums1[i]);
          break;
        }
      }
    }
  }
  for (int i = 0; i < nums2.size(); i++)
  {
    for (int j = 0; j < nums3.size(); j++)
    {
      if (nums2[i] == nums3[j])
      {
        v.push_back(nums2[i]);
        break;
      }
    }
  } 
  // removing duplicate element
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = i + 1; j < v.size(); j++)
    {
      if (v[i] == v[j])
      {
        v.erase(v.begin() + j);
      }
    }
  }
  return v;

}
 int main(){

  vector<int>v1  = {1,2,2};
  vector<int>v2 = {4,3,3};
  vector<int> v3 = {5,1};
  vector<int>v = twoOutOfThree(v1,v2,v3);

 for(int i =0;  i<v.size(); i++){
   cout<<v[i]<<" ";
 }

  return 0;
}



