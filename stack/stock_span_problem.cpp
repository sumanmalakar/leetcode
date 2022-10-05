#include<bits/stdc++.h>
using namespace std;

// stock span is variation of Nearest greatest left

vector<int> stock_span(vector<int> &v){
  vector<int>res;
  stack<int>s;
  int n = v.size();
  for(int i=0; i<n; i++){
    if(s.empty()){
      res.push_back(1);
      s.push(i);
      continue;
    }
    while(!s.empty() && v[i]>=v[s.top()]){
      s.pop();
    } 
   if(s.empty()){
     res.push_back(i+1);
   }else{
    int position = i - s.top();
    res.push_back(position);}

    s.push(i);
  }
return res;
}

int main(){
  vector<int> v = {100,80,60,70,60,75,85};
  vector<int>s = stock_span(v);
  for(int i=0; i<s.size(); i++){
    cout<<s[i]<<" ";
  }
}