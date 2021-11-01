#include <iostream>
#include <vector>
using namespace std;
vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
{
  int i, j,l,k;
  int s1 = arr1.size();
  int s2 = arr2.size();
  vector<int> v;
  // vector<int> v2;

  for (int i = 0; i < s2; i++)
  {
    for (int j = 0; j < s1; j++)
    {
      if (arr2[i] == arr1[j])
      {
        v.push_back(arr1[j]);
      }
    }
  }
  int n1 = v.size();

  for (i = 0; i < s1; i++)
  {
    for (j = 0; j < s2; j++)
    {
      if (arr1[i] == arr2[j])
      {
        break;
      }
    }
    if (j == s2)
    {
      v.push_back(arr1[i]);
    }
  }
  int n2 = v.size();

  for ( k = s2; k < n2; k++)
  {
    for ( l = k+1; l < n2; l++)
    {
      if (v[k] > v[l])
      {
        int temp = v[k];
        v[k] = v[l];
        v[l] = temp;
      }
    }
  }

  return v;
}

int main()
{

  vector<int>v1 = {26, 21, 11, 20, 50, 34, 1, 18};
  vector<int> v2 = {21, 11, 26, 20};
  vector<int> v3 = relativeSortArray(v1, v2);

  for (int i = 0; i < v3.size(); i++)
  {
    cout << v3[i] << " ";
  }

  return 0;
}