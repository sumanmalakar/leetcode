#include<bits/stdc++.h>
using namespace std;
// input :- Servies Now
// output :- Now Servies

int main(){
 
 string s = "Suman Malakar";
 string word;
 string result;
 int n = s.length();

 for(int i = n-1; i>=0; i--){
   if(s[i]==' '){
     for(int i=0; i<word.length()/2; i++){
       swap(word[i], word[word.length()-i-1]);
     }
     result += word + " ";
     word = "";
   }
   word += s[i];
 }
 
 for (int i = 0; i < word.length() / 2; i++)
 {
   swap(word[i], word[word.length() - i - 1]);
 }
 result += word;

cout<<result;

}