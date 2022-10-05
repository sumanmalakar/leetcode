#include <bits/stdc++.h>
using namespace std;

int max(vector<int> &v, int index)
{ 
  int s = v[index];
static int max_el;
   if (index == 0)
  {
   max_el = v[0];
  }
  max_el = max(s, max_el);
  if (index == v.size()) return max_el;
  max(v, index + 1);
}

int main()
{
  vector<int> v = {10, 20, 30, 40, -50};
  int index = 0;
 cout<<max(v, index);

  return 0;
}