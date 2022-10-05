#include<bits/stdc++.h>
using namespace std;
int main(){
  string s = "abbaca";
  stack<char>st;
  string word = "";
  int count;
  for(int i = 0; i < s.length(); i++)
  {  count = 0;
    if(st.empty()){
      st.push(s[i]);
      continue;
    }
    while (!st.empty() && s[i]==st.top())
    { count++;
      st.pop();
    }
    if(count==0){
    st.push(s[i]);}
  }
  while (!st.empty())
  { 
    word = word + st.top();
    st.pop();
  }
  reverse(word.begin(), word.end());
cout<<word;

  return 0;
}


// suscess is not dream or goal it's nesseccity!