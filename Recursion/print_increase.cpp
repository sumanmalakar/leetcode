#include<bits/stdc++.h>
using namespace std;
//input: n=5
//output: 1 2 3 4 5 

void print(int n)
{
  if (n == 0)
    return;
  print(n - 1);
  cout<<n<<endl;
  // cout << n<<" "<<n+1 << endl;
}

int main()
{

  int n = 5;
  print(n);

  return 0;
}