#include<iostream> 
#include<vector>
using namespace std;
vector<int> shuffle(vector<int> &nums, int n)
{
  int i, j;
  vector<int> v;
  for (i = 0; i < n; i++)
  {
    v.push_back(nums[i]);
    for (j = i + n; j <= i + n; j++)
    {
      v.push_back(nums[j]);
    }
  }
  return v;
}
 int main(){
   vector<int> v = { 1,1,2,2};
   int n = 2;
  vector<int> a = shuffle(v,n);

  for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
  }

       return 0;
}