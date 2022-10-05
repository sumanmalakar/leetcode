#include <bits/stdc++.h>
using namespace std;

vector<int> search(vector<int> &v, int index, int target)
{
  static vector<int> s;
  if (index == v.size())
    return s;
  else if (v[index] == target)
  {
    s.push_back(index);
  }
  vector<int> vi = search(v, index + 1, target);
  return vi;
}

int main()
{
  vector<int> v = {1, 4, 2, 1, 4, 1, 5, 8};
  int index = 1;
  vector<int> s = search(v, 0, index);
  for (int i = 0; i < s.size(); i++)
  {
    cout << s[i] << " ";
  }

  return 0;
}