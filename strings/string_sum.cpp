#include<bits/stdc++.h>
using namespace std;
int getLucky(string s, int k)
{
  vector<int> v;
  for (int i = 0; i < s.length(); i++)
  {
    int index = (int)s[i];
    int n = index - 96;
    if (n > 9)
    {
      while (n != 0)
      {
        int x = n % 10;
        n = n / 10;
        v.push_back(x);
      }
    }
    else
    {
      v.push_back(n);
    }
  }

  int sum = 0;
  for (int i = 0; i < v.size(); i++)
  {
    sum += v[i];
  }

  if (k <= 1)
  {
   return sum;
  }
  else
  {
    int n = sum;
    int sum1;
    for (int i = 1; i < k; i++)
    {
      sum1 = 0;
      while (n != 0)
      {
        int x = n % 10;
        n = n / 10;
        sum1 += x;
      }
      n = sum1;
    }
   return sum1;
  }
}

  int main()
  {
    string s = "yyyyyyyyyyy";
     int k = 1;
    cout << getLucky(s, k);
    

}