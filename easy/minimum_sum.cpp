#include <iostream>
using namespace std;
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
  int n = sizeof(returnSize) / sizeof(int);

  for (int i = 0; i < numsSize; i++)
  {
    int temp = nums[i];
    for (int j = i + 1; j < numsSize; j++)
    {
      if (temp + nums[j] == target)
      {
        returnSize[0] = i;
        returnSize[1] = j;
        break;
      }
    }
  }
  return returnSize;
}
int main()
{
  int nums[] = {3, 2, 4, 6};
  int n = sizeof(nums) / sizeof(int);
  int target = 6;
  int returnSize[2];
  twoSum(nums, n, target, returnSize);

  for (int i = 0; i < 2; i++)
  {
    cout << returnSize[i] << " ";
  }

  return 0;
}