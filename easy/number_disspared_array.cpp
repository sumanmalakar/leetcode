#include<iostream> 
#include<vector>
using namespace std;
vector<int> findDisappearedNumbers(vector<int> &nums)
{ int s = nums.size();
int i,j;
vector <int> v;
  for(i=1; i<=s; i++){
    for(j=0; j<s; j++){
      if(i==nums[j]){
        break;
      }
    }
    if(j==s){
      v.push_back(i);
    }
  }
  return v;
}

 int main(){
   vector<int> v = {1,3,6,9,9,8};
   vector<int> s = findDisappearedNumbers(v);

   for (int i = 0; i < s.size(); i++)
   {
     cout << s[i] << " ";
}
  

return 0;
}