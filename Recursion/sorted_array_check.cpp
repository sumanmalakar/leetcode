#include<bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int>&v, int s , int e){
  if(e == v.size())return true;

  if(v[s]<v[e]){
    is_sorted(v, s+1, e+1);
  }else {
    return false;
  }
}

int main(){
  vector<int> v = {1,3,4,2,11};
  int n = is_sorted(v, 0,1);
  if(n!=0){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
}