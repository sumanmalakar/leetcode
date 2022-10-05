#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v, int index)
{
  if (index == v.size())
    return;
  print(v, index + 1);
  cout << v[index] << endl;
}

int main()
{
  vector<int> v = {10, 20, 30, 40, 50};
  int index = 0;
  print(v, index);

  return 0;
}