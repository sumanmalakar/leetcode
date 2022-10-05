#include <bits/stdc++.h>
using namespace std;

//4) find an element in roated sorted array.

int search(vector<int> &v, int k)
{
  int s = 0;
  int e = v.size() - 1;
  while (s <= e)
  {
    int mid = (s + e) / 2;
    if (v[mid] == k)
      return mid;
    else if (v[mid] > v[s])
    {
      if (k >= v[s] && k <= v[mid])
      {
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }
    else
    {
      if (k >= v[mid] && k <= v[e])
      {
        s = mid + 1;
      }
      else
      {
        e = mid - 1;
      }
    }
  }
  return -1;
}

int main()
{
  vector<int> v = {20, 30, 40, 50, 60, 5, 10};
  int k = 690;
  cout << search(v, k);

  return 0;
}