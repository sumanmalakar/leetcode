#include<iostream> 
using namespace std; 

void print(int n){
  if(n==0) return;
  cout<<"pre "<<n<<endl;
  print(n-1);
  cout<<"In "<<n<<endl;
  print(n-1);
  cout<<"Post "<<n<<endl;
}

 int main(){
print(2);
  

return 0;
}