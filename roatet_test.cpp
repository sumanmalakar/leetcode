#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> nums = {4,3,2,6};
  vector<int> v;
  int r = 0;
  while (r != nums.size())
  {
    // rotate(vec1.begin(), vec1.begin() + vec1.size() - rotR, vec1.end());
    // rotate(nums.begin(), nums.begin() + nums.size() - r, nums.end());
    cout << endl<< "r is = " << r << ", ";

    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      cout << nums[i] << " ";
      sum += i * nums[i];
    }
    // cout << endl;

    cout << "sum is " << sum << " ";
    cout << endl;

    v.push_back(sum);
    r++;
    }
    cout<<endl;

    int max_sum = v[0];
    for (int i = 1; i < v.size(); i++)
    {  cout<<v[i]<<" ";
      if (max_sum < v[i])
      {
        max_sum = v[i];
        cout<<endl<<"max_sum "<<max_sum<<" ";
      }
    }
  cout<<endl<<max_sum;

  return 0;
}