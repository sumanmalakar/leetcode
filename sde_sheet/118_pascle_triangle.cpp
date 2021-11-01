class Solution
{
public:
  int fact(int n)
  {
    if (n == 0 || n == 1)
    {
      return 1;
    }
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
      fact = fact * i;
    }
    return fact;
  }
  int combination(int n, int r)
  {
    return fact(n) / (fact(r) * fact(n - r));
  }
  vector<vector<int>> generate(int numRows)
  {
    vector<vector<int>> v;
    vector<int> s;
    for (int i = 0; i < numRows; i++)
    {
      for (int j = 0; j <= i; j++)
      {
        int result = combination(i, j);
        s.push_back(result);
      }
      v.push_back(s);
      s.clear();
    }
    return v;
  }
};