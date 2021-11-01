#include<iostream> 
#include<vector>
using namespace std; 
vector<int> k_rotate(vector<int> &nums, int k){
  int s = nums.size();
  vector <int> v;
  for(int i=s-k; i<s; i++){
    v.push_back(nums[i]);
  }
  for (int i = 0 ; i < s - k; i++)
  {
    v.push_back(nums[i]);
  }
  return v;
}

 int main(){
vector<int> v = {1,3,5,7,9};
int k = 3;
vector<int> s = k_rotate(v,k);
for(int i=0; i<s.size(); i++){
  cout<<s[i]<<" ";
}

return 0;
}