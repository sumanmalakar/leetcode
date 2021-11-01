#include<iostream> 
#include<vector>
using namespace std;

int missingNumber(vector<int> &nums)
{ int s = nums.size();
int i,j,k;
for(i =0; i<=s; i++){
  for(j=0; j<s; j++){
    if(i==nums[j]){
      break;
    }
  }
  if(j==s){
    k = i;
    break;
  }
}
return k;
}

 int main(){

   vector<int> v = { 0};
   cout << missingNumber(v);

   return 0;
}