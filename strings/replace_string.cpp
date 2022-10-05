#include<bits/stdc++.h>
using namespace std;
string shitf(char s, string k){
  string word;
  word += s + stoi(k);
  return word;
}
string replaceDigits(string s)
{
  string new_word; // a1b2c3d4;
  string word;
  for (int i = 1; i < s.length(); i++)
  {  string n += s[i];
    word = shitf(s[i-1], s[i]);
  }
}

int main(){
  string s = "a1b2c3def";
  cout<<shitf(s[0], 5);

}