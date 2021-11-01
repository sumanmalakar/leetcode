#include<iostream>
#include<vector>
using namespace std;
vector<int> min_sum(vector<int> &v, int k){
  vector<int>n;
  int s = v.size();
  for(int i = 0; i<s; i++){
    for(int j = i+1; j<s; j++){
      if(v[i]+v[j]==k){
          n.push_back(i);
          n.push_back(j);
          break;
      }
    }
  }
  return n;
}

int main(){
vector<int> v = { 3,2,4,6,10,5 };
int target = 5;
vector<int> s = min_sum(v,target);
cout<<s[0]<<" "<<s[1];


  return 0;
}