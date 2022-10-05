#include<bits/stdc++.h>
using namespace std;

int fact(int n){
  if(n==0)return 1;

  int ans = n*fact(n-1);
  return ans;
}

int main(){
  int n =5;
  cout<<fact(n);
}