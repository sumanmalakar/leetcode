#include<bits/stdc++.h>
using namespace std;
void print_(int n){
  if(n==0)return;
  cout<<n<<endl;
  print_(n-1);
  cout<<n<<endl;
}

int main(){
  int n = 5;
  print_(n);
}