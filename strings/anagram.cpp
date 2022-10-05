#include<bits/stdc++.h>
using namespace std; 

 int main(){

string s1 = "instagram"; //"rat";  //"anagram";
string s2 = "gramjnsta"; //"car"; // "nagaram";

  int i;
  int n1 = s1.length();
  int n2 = s2.length();

sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end());

if(n1!=n2){
  cout << s1 << " " << s2;
  cout <<endl<< "s1 is not anagram of s2";
}else{

for( i=0; i<s1.length(); i++){
  if(s1[i]!=s2[i]){
    cout<<s1<<" "<<s2;
    cout << endl
         << "s1 is not anagram of s2";
    break;
  }
} if(i == s1.length()){
cout << s1 << " " << s2;
cout <<endl<< "s1 is anagram of s2";}
}




return 0;
}