#include<iostream> 
using namespace std; 
//input: n=5
//output: 5 4 3 2 1

void print(int n){
  if(n==0) return;
  cout<<n<<endl;
  print(n-1);
}

 int main(){
int n = 5;
print(n);

return 0;
}