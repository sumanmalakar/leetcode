#include <bits/stdc++.h>
using namespace std;

// input = {2,4,-1,3,-4,0,3} sum/key = 5
// output true

bool three_sum(vector<int> &v)
{
  sort(v.begin(), v.end());
  int n = v.size();
  int i;
  for(int k=0; k<n-2; k++){
      i = k+1;
  int key = -v[k];
  int j = n - 1;

  while (i <= j)
  {
    if (v[i] + v[j] == key)
    {
      return true;
    }
    else if (v[i] + v[j] < key)
    {
      i++;
    }
    else
    {
      j--;
    }
  }

  } return false;
}

int main()
{
  vector<int> v = {2, 4, 2,4,5,5, 3};
  int n = three_sum(v);
  if(n!=0){
    cout<<"true";
  }else{
    cout<<"false";
  }
}