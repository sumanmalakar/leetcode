#include <bits/stdc++.h>
using namespace std;
// {-3,-1,0,4,6,7}


bool two_sum(vector<int> &v, int key, int i)
{
  int n = v.size();
  int j = n - 1;
  while (i < j)
  {
    if (v[i] + v[j] == key)
    {
     return true;
    }
    else if (v[i] + v[j] < key)
    {
      i++;
    }
    else
    {
      j--;
    }
  } return false;
}

bool three_sum(vector<int> &v)
{ 
  sort(v.begin(), v.end());
  int i;
  int n = v.size();

  for (i = 0; i < n - 2; i++)
  {
    if (two_sum(v, -v[i], i + 1))
      return true;
  }
  return false;
}

int main()
{
  vector<int> v = {2, 4, -1, 3, -4, 0, 3};
  int n = three_sum(v);
  if(n){
    cout<<"sum = 0 exit";
  }else{
    cout<<"sum = 0 not exit";
  }
}