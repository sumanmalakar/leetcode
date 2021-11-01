#include<bits/stdc++.h>
using namespace  std;
string sub_set(int a1[], int a2[], int m, int n){
  sort(a1, a1 + n);
  sort(a2, a2 + m);
  for (int i = 0; i < m; i++)
  {
    int key = a2[i];
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
      int mid = (s + e) / 2;

      if (a1[mid] == key)
      {
        break;
      }
      else if (a1[mid] > key)
      {
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }
    if (s > e)
    {
      return "No";
    }
  }
  return "Yes";
}
int main(){
int a1[] = {11, 1, 13, 21, 3, 7};
int n = sizeof(a1)/sizeof(int);
int a2[] = {11, 3, 7, 1};
int m = sizeof(a2)/sizeof(int);

cout<<sub_set(a1,a2,m,n);
  
 
  
}