#include<bits/stdc++.h>
using namespace std;
int main(){
string str = "I love java, the coffe";
int n = str.length();
string str_new;
string word;

for(int i = n-1; i>=0; i--){
  if(str[i] == ' '){
    for(int i=0; i<word.length()/2; i++){
      swap(word[i],word[word.length()-i-1]);
    }
    str_new += word + ' ';
    word = "";
  }
word += str[i];
}
for (int i = 0; i < word.length() / 2; i++)
{
  swap(word[i], word[word.length() - i - 1]);
}
str_new += word;

cout<<str_new;
}