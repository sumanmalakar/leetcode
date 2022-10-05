#include<bits/stdc++.h>
using namespace std;
  int binary_search(vector<int> &v, int key)
  {
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
      int mid = (s + e) / 2;
      if (v[mid] == key)
      {
        return mid;
      }
      else if (v[mid] < key)
      {
        s = mid + 1;
      }
      else
      {
        e = mid - 1;
      }
    }
    return -1;
  }
  vector<int> twoSum(vector<int> &numbers, int target)
  {
    vector<int> v;
    int n;
    int k;
    int bs;
    for (int i = 0; i < numbers.size(); i++)
    {
      n = numbers[i];
      k = target - n;
 
      bs = binary_search(numbers, k);
      

      if (numbers[bs] + n == target)
      {
        v.push_back(i + 1);
        v.push_back(bs + 1);
        break;
      }
     
    }
    return v;
  }

int main(){
  vector<int> v = {5,25,75};
  int k = 100;
  vector<int>s = twoSum(v,k);
  // twoSum(v,k);
  cout<<s[0]<<" "<<s[1];
}