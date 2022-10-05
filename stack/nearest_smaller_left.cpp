#include<bits/stdc++.h>
using namespace std;

vector<int> nearest_smaller_left(vector<int> &v){
  vector<int>res;
  stack<int>s;
  for(int i=0; i<v.size(); i++){
    if(s.empty()){
      res.push_back(-1);
      s.push(v[i]);
      continue;
    }
    while(!s.empty() && v[i]<=s.top()){
      s.pop();
    }
    if(s.empty()){
      res.push_back(-1);

    }else{
      res.push_back(s.top());
    }

    s.push(v[i]);
  }
  return res;
}

int main()
{
  vector<int> v = {4,5,2,10,8};
  vector<int> s = nearest_smaller_left(v);
  for (int i = 0; i < s.size(); i++)
  {
    cout << s[i] << " ";
  }
}