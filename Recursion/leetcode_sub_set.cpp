#include<bits/stdc++.h>
using namespace std;

void print_f(vector<int> &s, vector<int> &t){
//  static vector<vector<int>>result;
if(s.size()==0){
//  result.push_back(t);
//  return result;
for(int i=0; i<t.size(); i++){
  cout<<t[i]<<" ";
}cout<<endl;
return;
}

vector<int> op1;
vector<int> op2;
for(int i=0; i<t.size(); i++){
  op1[i] = op2[i] = t[i];
}

op2.push_back(s[0]);
s.erase(s.begin()+0);

print_f(s, op1);
print_f(s, op2);

// vector<vector<int>>n= print_f(s,op1);
// vector<vector<int>> m = print_f(s, op2);
// return result;
}

int main(){
  vector<int>v = { 1,2 };
  vector<int>s;
  print_f(v, s);
  //   vector<vector<int>>t = print_f(v,s);
  //  cout<<t.size();
 

  // for(int i=0; i<t.size(); i++){
  //   for(int j=0; j<t[i].size(); j++){
  //     cout<<t[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

}