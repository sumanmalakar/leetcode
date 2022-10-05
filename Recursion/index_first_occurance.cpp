#include <bits/stdc++.h>
using namespace std;

int max(vector<int> &v, int index, int target)
{ if(index==v.size()+1){
  return -1;
}
  if (v[index] == target)
  {
    return index;
  }
  else
  {
    int n = max(v, index + 1, target);
    return n;
  }
}

int main()
{
  vector<int> v = {1, 2, 3, 4, 5, 3, 5, 7, 8};
  int index = 5;
  cout << max(v, 0, index);

  return 0;
}