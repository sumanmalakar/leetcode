#include<iostream> 
int fact(int n){
  if(n==0 || n==1){
    return 1;
  }
  return n*fact(n-1);
} 

int fact2(int n){
  if(n==0 || n==1)return 1;
  int fq = fact2(n-1);
  int result = n*fq;
  return result;
}

using namespace std; 

 int main(){
int n = 5;
cout<<"This is method first " <<fact(n)<<endl;
cout<<"This is method second "<<fact2(n)<<endl;
  

return 0;
}