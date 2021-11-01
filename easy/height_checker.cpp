#include <iostream>
#include <vector>
using namespace std;
int heightChecker(vector<int> &heights)
{
  int i, j, k, l, count = 0;
  int s = heights.size();
  vector<int> v;
  for (int i = 0; i < s; i++)
  {
    v.push_back(heights[i]);
  }

  for (i = 0; i < s; i++)
  {
    for (j = i + 1; j < s; j++)
    {
      if (heights[i] > heights[j])
      {
        int temp = heights[i];
        heights[i] = heights[j];
        heights[j] = temp;
      }
    }
  }

  for (k = 0; k < s; k++)
  {
    for (l = k; l <= k; l++)
    {
      if (heights[k] != v[l])
      {
        count = count + 1;
      }
    }
  }

  return count;
}

int main()
{
  vector<int> v = {1,2,3,4,5};
  cout << heightChecker(v);
}