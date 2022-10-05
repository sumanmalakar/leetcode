#include<bits/stdc++.h>
using namespace std;

int past_power(int x, int n)
{
  if(n==0) return 1;

int xp = past_power(x,n/2);
int res = xp*xp;

if(n%2!=0){
  res = res*x;
}

return res;
}

int main(){
  int x = 2;
  int n = 4;
  cout<<past_power(x,n);
}