#include <iostream>
#include <vector>
using namespace std;
vector<int> max_sum_index(vector<int> &nums, int key)
{
  int cs = 0;
  int max_sum = 0;
  int i, k = 0, end = 0;
  int s = nums.size();
  vector<int> v;
  for (i = k; i < s; i++)
  {
    cs = cs + nums[i];
    if (cs < 0)
    {
      cs = 0;
    }
    max_sum = max(cs, max_sum);
    if (max_sum == key)
    {
      end = i;
      break;
    }
    else if (i==s-1)
    {
      max_sum = 0;
      cs = 0;
      end=0;
      k = k + 1;
      i = k - 1;
    }
  }
  v.push_back(k + 1);
  v.push_back(end + 1);
  return v;
}

int main()
{ vector<int> v = {2, 4, 10, 13, -10, 5, 6};
  int key = 17;
  vector<int> s = max_sum_index(v, key);
  for (int i = 0; i < s.size(); i++)
  {
    cout << s[i] << " ";
  }

  return 0;
}