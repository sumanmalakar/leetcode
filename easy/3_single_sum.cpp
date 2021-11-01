#include <iostream>
#include <vector>
using namespace std;

int main()
{

  vector<int> v = {4,2,2,5,4};
  int i, j;
  int k;
  for (i = 0; i < v.size(); i++)
  {
    for (j = 0; j < v.size(); j++)
    {
      if (i == j)
      {
        continue;
      }
      if (v[i] == v[j])
      {
        break;
      }
    }
    if (j == v.size())
    {
      k = v[i];
      return k;
    }
    }

  cout << k;

  return 0;
}