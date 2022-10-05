#include<bits/stdc++.h> 

using namespace std; 

 int main(){
  string s1 = "456";
  string s2 = "77";
  
  int n1 = s1.length();
  int n2 = s2.length();
  if(n1>n2){
    int r = n1-n2;
    for(int i=0; i<r; i++){
        s2 = '0' + s2;
    }
  }else{
    int r = n2 - n1;
    for (int i = 0; i < r; i++)
    {
      s1 = '0' + s1;
    }}
  cout<<s1<<endl<<s2<<endl;

  string str;
  int n = s1.length();
  int i= n-1;
  while(i>=0){
    static int x = 0;
    int n1 = (int)s1[i] - '0';
    int n2 = (int)s2[i] - '0';
    int sum = n1 + n2;
    sum = sum+x;
    x = sum%10;
    x = sum/10;
    string s = to_string(x);
    str+= s;
  }
  reverse(str.begin(), str.end());

  cout<<str;


return 0;
}