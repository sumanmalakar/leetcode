#include <iostream>
using namespace std;

int getIthBit(int n, int i)
{
  int mask = (n>>i);
  return (n & mask) > 0 ? 1 : 0;
}

int no_of_one(int n){
  int count  = 0;
  while(n!=0){
  if(n&1==1){
    count++;
  }
    n >> 1;
  }

  return count;
}
int main()
{

  // int n = 25;
  // int i = 0;

// cout<<getIthBit(n, i);
// cout<<no_of_one(13);

int n = 13;

  int count = 0;
  while (n>0)
  {
    if (n&1 == 1)
    {
      count++;
      cout<<count<<endl;
    }
    n>>1;
  }
  cout<<count;

  return 0;
}