#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "sentence3 a4 is2 This1";
  vector<string> v(10, "");
  string res = "";
  string word = "";
  int n = s.length();
  // cout << n;
  int k;
  for (int i = 0; i < n ; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
    {
      word += s[i];
    }
    else if (s[i] >= '0' && s[i] <= '9')
    {
      k = (int)s[i];
      k = k - 48;
    }
    else if (s[i] == ' ')
    {
      v[k] = word;
      word = "";
    }
  }

  v[k] = word;

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }


   for (int i = 0; i < v.size(); i++)
   {
     for (int j = 0; j < v[i].size(); j++)
     {
       res += v[i][j];
     }
     res += " ";
   }
   cout<<endl<<res;

  return 0;
}