#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
// void sort_fun(vector<int> &v){
//   sort(v.begin(), v.end());
// }
// int main(){
//   vector<int> v = {12,3,-3,0,4,5};
//   sort_fun(v);
//   for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
//   }
// }

int main(){
  string  s = "1.1.1.1";
  // cout<<s[0];
  for(int i=0; s[i]!='\0';i++){
    if(s[i]=='.'){
      s[i] = '[';
    }
  }
  cout<<s;
}