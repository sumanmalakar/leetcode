#include <bits/stdc++.h>
using namespace std;
// input = {5, 4, 1, 4, 3, 5, 1, 2}
// output = {3,2}

int main()
{
  vector<int> v = {5, 4, 1, 4, 3, 5, 1, 2};
  vector<int> v1;
  vector<int> v2;
  int res = 0;
  for (int i = 0; i < v.size(); i++)
  {
    res = res ^ v[i];
  }

  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] & 1 == 1)
    {
      v1.push_back(v[i]);
    }
    else
    {
      v2.push_back(v[i]);
    }
  }

  for (int i = 0; i < v1.size(); i++)
  {
    cout << v1[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < v2.size(); i++)
  {
    cout << v2[i] << " ";
  }
  cout << endl;

  int a = res;
  int b;
  for (int i = 0; i < v1.size(); i++)
  {
    a = v1[i] ^ a;
  }
  b = a ^ res;

  cout << a << " " << b;

  return 0;
}