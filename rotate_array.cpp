#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> vec1{4, 3, 2, 6};

  for (int i = 0; i < vec1.size(); i++)
  {
    cout << vec1[i] << " ";
  }
  cout << "\n";

  int rotR = 3;

  // rotate function
  rotate(vec1.begin(), vec1.begin() + vec1.size() - rotR, vec1.end());

  cout << "\n";

  for (int i = 0; i < vec1.size(); i++)
  {
    cout << vec1[i] << " ";
  }

  return 0;
}
