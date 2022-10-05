#include <bits/stdc++.h>
using namespace std;
pair<int,int> search_in_2D(int arr[][10], int m, int n, int key)
{
  int r = 0;
  int c = n - 1;
  
  if(key<arr[0][0] || key>arr[m-1][n-1]){
    return {-1 , -1};
  }

  while (c >= 0)
  {
    if (arr[r][c] == key)
    {
      return {r,c};
    }
    else if (arr[r][c] > key)
    {
      c--;
    }
    else if (arr[r][c] < key)
    {
      r++;
    }
  }
  return {-1,-1};
}

int main()
{

  int arr[][10] = {{10, 20, 30, 40},
                   {15, 25, 35, 45},
                   {27, 29, 37, 48},
                   {32, 33, 39, 50}};

  int m = 4, n = 4;
  int k = 33;

 pair<int,int> cordinates = search_in_2D(arr, m, n, k);

 cout<<cordinates.first<<" "<<cordinates.second<<endl;


  return 0;
}