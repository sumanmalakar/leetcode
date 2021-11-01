#include <iostream>
#include <vector>
using namespace std;
int kadans_algo(vector<int> &v)
{
  int i;
  int csum = v[0];
  int bsum = v[0];
  for (i = 1; i < v.size(); i++)
  {
    if (csum > 0)
    {
      csum = csum + v[i];
      if (csum > bsum)
      {
        bsum = csum;
      }
    }
    else
    {
      csum = 0;
      csum = csum + v[i];
      if (csum > bsum)
      {
        bsum = csum;
      }
    }
  }
  return bsum;
}

int main()
{
  vector<int> v = {2,4,-1,5,-3,-4,-10,12,6,-1,-2};
  cout << kadans_algo(v);

  return 0;
}