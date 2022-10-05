#include<iostream> 
#include<string>
using namespace std; 

 int main(){

   int n = 5;
  //  cout<<"enter the no of string \n";
  //  cin>>n;
   string strs;
   int len;
   int max_len =0;
   string new_str;
   while(n--){ // n ke zero hote tak loop chalega
    getline(cin, strs);
     len = strs.length();
     if(len>max_len){
       max_len = len;
       new_str = strs;
     }
     
   }

   cout<<new_str;

  

return 0;
}