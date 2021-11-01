#include<iostream> 
using namespace std; 

void swap(int &n , int &m){
  int temp = n;
  n = m ;
  m = temp;
}

 int main(){
int m,n;
cin>>m>>n;
swap(m,n);
cout<<m<<" "<<n;
  

return 0;
}