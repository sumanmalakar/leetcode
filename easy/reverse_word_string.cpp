#include<iostream> 
#include<vector>
using namespace std; 

 int main(){
   string str = "ram";
   int n = str.size();
              
   for(int i=0; i<n/2; i++){
     swap(str[i],str[n-i-1]);
   }

   cout<<str;
 
    return 0;
  }