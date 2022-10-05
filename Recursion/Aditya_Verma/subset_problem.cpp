#include <bits/stdc++.h>
using namespace std;

vector<string> print_subset(string str, string op)
{
  if (str.length() == 0)
  {
    vector<string> v;
    v.push_back(op);
    return v;
  }
  string op1 = op;
  string op2 = op;
  op2.push_back(str[0]);
  str.erase(str.begin() + 0);

  vector<string> m = print_subset(str, op1);
  vector<string> s;
  for (int i = 0; i < m.size(); i++)
  {
    s.push_back(m[i]);
  } 
 
  s = print_subset(str, op2);
 static vector<string> k;
  for (int i = 0; i < s.size(); i++)
  {
    k.push_back(s[i]);
  }
  return k;
}

int main()
{
  string s = "abc";
  vector<string> v = print_subset(s, "");
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}