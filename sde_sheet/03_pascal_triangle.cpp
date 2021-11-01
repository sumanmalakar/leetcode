#include <iostream>
using namespace std;

// Write a fuction to print Pascal triangle.

int factorial(int n)
{
  // u can also make this, without recursion
  if (n == 0 || n == 1)
    return 1;
  return n * factorial(n - 1);
}

int combination(int n, int r)
{
  return factorial(n) / (factorial(n - r) * factorial(r));
}

void printPascal(int n)
{
  int i, j, result;
  for (i = 0; i < n; i++)
  {
    {
      for (int k = 0; k <= n - i; k++)
      {
        cout << " ";
      }
    }
    for (j = 0; j <= i; j++)
    {
      result = combination(i, j);
      cout << result << "  ";
    }
    cout << endl;
  }
}

int main()
{

  // cout<<factorial(0);
  // cout << combination(6, 2);
  printPascal(7);

  return 0;
}