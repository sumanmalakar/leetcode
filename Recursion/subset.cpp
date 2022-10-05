#include<bits/stdc++.h>
using namespace std;

void print_subset(string str, string op){
  if(str.length()==0){
    cout<<op<<" ";
    return;
  }
  string op1 = op;
  string op2 = op;
  op2.push_back(str[0]);
  str.erase(str.begin()+0);
  
  print_subset(str, op1);
  print_subset(str, op2);
  return;

}

int main(){
string s = "abc";
 print_subset(s,"");
}