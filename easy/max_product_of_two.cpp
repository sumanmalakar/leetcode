#include <iostream>
#include <vector>
using namespace std;
int maxProduct(vector<int> &nums)
{
  int i, j, k, max;
  max = (nums[0] - 1) * (nums[1] - 1);

  for (i = 0; i < nums.size(); i++){
    for (j = i + 1; j < nums.size(); j++){
        k = 1;
      k = k*(nums[i] - 1) * (nums[j] - 1);
      if(k>max){
        max = k;
      }
    }}

    return max;
}

int main()
{
  vector<int> v = {3,7};
  cout << maxProduct(v);

  return 0;
}