#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s = "  hello world  ";

      string word = "";
  string new_w = "";
  int n = s.length();
  for(int i=n-1; i>=0; i--){
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
      word += s[i];
    }
    int m = word.length();

    if (m == 0 && s[i] == ' ')
      continue;
    else if(s[i] == ' '){

    if(i!=0 && s[i-1] == ' ') continue;

      for(int i=0; i<word.length()/2; i++){
        swap(word[i], word[word.length()-i-1]);
      } if(i == 0 && s[i]== ' '){
        new_w += word;
        word = "";
      }else{
      new_w += word + " ";
      word = "";}
    }
  }
  for (int i = 0; i < word.length() / 2; i++)
  {
    swap(word[i], word[word.length() - i - 1]);
  }
  if(word.length() >=1){
    new_w += word;
  }
cout<<new_w;
}