#include<iostream> 
#include<string>
using namespace std; 

 int main(){
string s = "abcd";

for(int i=0; i<s.length(); i++){
  for(int j=1; j<=s.length(); j++){
    cout<<s.substr(i,j)<<endl;
  }
  // cout<<" ";
}


return 0;
}