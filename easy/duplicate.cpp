#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> digits =
      { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
  int i, j, sum = 0, k;
  vector<int> v;
  for (i = 0; i < digits.size(); i++)
  {
    sum = sum * 10 + digits[i];
  }
  cout << sum << endl;
  k = sum + 1;
  digits.clear();
  while (k != 0)
  {
    int x = k % 10;
    digits.push_back(x);
    k = k / 10;
  }

  for(int i = digits.size()-1; i>=0; i--){
    v.push_back(digits[i]);
  }


  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}