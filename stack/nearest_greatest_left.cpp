#include<bits/stdc++.h>
using namespace std;

vector<int> left(vector<int> &v){
  vector<int>result;
  stack<int>s;
  int n = v.size();
  for(int i=0; i<n; i++){
    if(s.empty()){
      result.push_back(-1);
      s.push(v[i]);
      continue;
    }
    while(!s.empty() && v[i]>= s.top()){
      s.pop();
    }
    if(s.empty()){
      result.push_back(-1);
    }else{
      result.push_back(s.top());
    }
    s.push(v[i]);
  }
  return result;
}

int main(){
  vector<int> v = {1,2,3,4};
  vector<int> s = left(v);
  for(int i=0; i<s.size(); i++){
    cout<<s[i]<<" ";
  }
}