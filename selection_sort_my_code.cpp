#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v = {5, 4, 3, 1, 2, 6, 10, 0};
  int n = v.size();
  int min_postion;

  for (int i = 0; i < n - 1; i++)
  {
    min_postion = i + 1;
    for (int j = i + 1; j < n; j++)
    {
      if (v[min_postion] > v[j])
      {
        min_postion = j;
      }
    }
    if (v[i] > v[min_postion])
    {
      swap(v[i], v[min_postion]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}