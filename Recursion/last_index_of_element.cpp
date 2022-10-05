#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &v, int index, int target)
{
  if(index == v.size()){return -1;}
  int res =  search(v, index + 1, target);
  if(res == -1){
    if(v[index] == target){
      return index;
      }else{
        return -1;
      }
      }else{
        return res;
      }
} 


int main()
{
  vector<int> v = {1, 4, 2, 4, 5, 8};
  int index = 2;
  cout << search(v, 0, index);

  return 0;
}