#include <iostream>
#include <vector>
using namespace std;
// https : //leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
// Input : arr = [ 2, 2, 2, 2, 5, 5, 5, 8 ], k = 3, threshold = 4 Output : 3

int numOfSubarrays(vector<int> &arr, int k, int threshold)
{
  int i, cs = 0, max_sum = 0, cout1 = 0, cout = 0, avg;

  for (i = 0; i < arr.size(); i++)
  {
    cout1++;
    cs = cs + arr[i];
    if (cs < 0)
    {
      cs = 0;
    }
    max_sum = max(cs, max_sum);
    if (cout1 == k)
    {
      cout1 = 0;
      i = i - k + 1;
      avg = max_sum / k;
      if (avg >= threshold)
      {
        cout++;
        avg = 0;
      }
      cs = 0;
      max_sum = 0;
    }
  }
  return cout;
}

int main()
{
  vector<int> v = {4, 4, 4, 4};
  int k = 4;
  int t = 1;
  cout<<numOfSubarrays(v,k,t);

  return 0;
}