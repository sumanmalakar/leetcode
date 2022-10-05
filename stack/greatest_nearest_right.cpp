#include <bits/stdc++.h>
using namespace std;
vector<int> result(vector<int> &v)
{
  vector<int> r;
  stack<int> s;
  int n = v.size();

  for (int i = n - 1; i >= 0; i--)
  { if (s.empty())
    {
      r.push_back(-1);
      s.push(v[i]);
      continue;
    }  while (!s.empty() && v[i] >= s.top())
    {
      s.pop();
    }
    if (s.empty())
    {
      r.push_back(-1);
    }
    else
    {
      r.push_back(s.top());
    }
    s.push(v[i]);
  }
  return r;
}

int main()
{
  vector<int> v = {1,3,0,0,1,2,4};
  vector<int> s = result(v);
  reverse(s.begin(), s.end());
  for (int i = 0; i < s.size(); i++)
  {
    cout << s[i] << " ";
  }
}