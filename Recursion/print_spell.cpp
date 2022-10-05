#include<bits/stdc++.h>
using namespace std;

static string codes[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void spell(int n){
  if(n==0) return;

  int x = n%10;
  spell(n/10);
  string s = codes[x];
  cout<<s<<" ";

}
int main(){
  int n = 90123;
  spell(n);
}
