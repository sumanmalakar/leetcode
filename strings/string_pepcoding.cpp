#include<iostream> 
#include<string>
using namespace std; 

 int main(){
   string s = "Hello";
  //  cout<<s;
   string input;
  //  cin>>input;
//  getline(cin, input);
//    cout<<input;
// cout<<s[0];
// cout << s[2];
// for(int i=0; i<s.length(); i++){
// cout<<s[i]<<" ";
// cout << s[i] << endl;
// }
// cout<<endl;
// s[2] = 'm';
// cout<<s;
// for(int i=0; i<s.length(); i++){
//   cout<<s[i]<<" ";
// }

string str = "abcd";

// cout<<str.substr(0,1)<<endl;
// cout << str.substr(1, 2)<<endl;
// cout << str.substr(0, 4) << endl;
// cout<<str.substr(1);

string s1 = "Hello";
string s2 = "world";
string s3 = s1 + " " +  s2;
cout<<s3<<endl;

s3 += "ram";
s3 += "3";
cout<<s3;
cout<<endl;

string s4 = 10 + 20 + "hello";
cout<<s4<<endl;

string s5 = "suman malakar from kotastura std";


return 0;
}