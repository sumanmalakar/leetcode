#include <bits/stdc++.h>
using namespace std;

static string codes[] = {".;", "abc", "def", "ghi", "jkl", "mnop", "qrst", "uv", "wxyz"};

vector<string> getKPC(string str)
{
  if (str.length() == 0)
  {
    vector<string> bres;
    bres.push_back("");
    return bres;
  }

  char ch = str[0];
  string ros = str.substr(1);
  vector<string> rres = getKPC(ros);

  vector<string> nres;

  string codeforch = codes[ch - '0'];
  for (int i = 0; i < codeforch.length(); i++)
  {
    char chcode = codeforch[i];
    for (int i = 0; i < rres.size(); i++)
    {
      nres.push_back(chcode+rres[i]);
    }
  }

  return nres;
}

int main()
{
  string str = "73";
  vector<string> s = getKPC(str);
  for (int i = 0; i < s.size(); i++)
  {
    cout << s[i] << " ";
  }

  return 0;
}