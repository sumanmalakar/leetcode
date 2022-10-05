#include<iostream> 
#include<string>
using namespace std; 
// https://leetcode.com/problems/defanging-an-ip-address/
// Input : address = "1.1.1.1"
// Output : "1[.]1[.]1[.]1"

  string defangIPaddr(string address)
{
  int n = address.length();
  string str;
  for (int i = 0; i < n; i++)
  {
    if (address[i] == '.')
    {
      str = str + "[.]";
    }
    else
    {
      str = str + address[i];
    }
  }
  return str;
}

 int main(){
   string s = "1.1.1.1";
   cout<<defangIPaddr(s);

       return 0;
}