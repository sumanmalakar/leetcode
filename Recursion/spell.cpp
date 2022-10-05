#include <bits/stdc++.h>
using namespace std;
static string codes[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


vector<string> spell(int n)
{
  if (n == 0)
  {
    vector<string> blank;
    blank.push_back("");
    return blank;
  }
  int k = n % 10;
  vector<string> r_result = spell(n / 10);
  vector<string> n_result;
  for (int i = 0; i < r_result.size(); i++)
  {
    n_result.push_back(r_result[i]);
  }
  string str = codes[k];
  n_result.push_back(str);
  return n_result;
}

int main()
{
  int n = 2029;
  vector<string> s = spell(n);
  for (int i = 0; i < s.size(); i++)
  {
    cout << s[i] << " ";
  }
}