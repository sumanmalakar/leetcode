#include <bits/stdc++.h>
using namespace std;
vector<string> gss(string str){
  if(str.length() == 0){
    vector<string>bres;
    bres.push_back("");
    return bres;
  }

  char ch = str[0]; // a
  string ros = str.substr(1); // bc
  vector<string> rres = gss(ros); // [--, --c, b-, bc]

  vector<string> nres;
  for(string rstr: rres){
    nres.push_back(rstr);
  }

  for(string rstr: rres){
    nres.push_back(ch + rstr);
  }

  return nres;
}

int main()
{
  string str = "abc";
vector<string>s = gss(str);
for(int i =0; i<s.size(); i++){
  cout<<s[i]<<" ";
} 

  return 0;
}