#include<bits/stdc++.h>
using namespace std;

// input = {2,4,-1,3,-4,0,3} sum/key = 5
// output true

void two_sum(vector<int> &v, int key){
  sort(v.begin(), v.end());
  // after sorting arr be like = {-4, -1, 0, 2, 3, 3, 4 }
  int n = v.size();
  int i=0; int j = n-1;
  while(i<=j){
    if(v[i]+v[j]==key){
      cout<<i<<" "<<j;
      break;
    }else if(v[i]+v[j]<key){
      i++;
    }else{
      j--;
    }
  }
}
int main(){
  vector<int> v = {2,4,-1,3,-4,0,3};
  int k = 5;
  two_sum(v, k);
}