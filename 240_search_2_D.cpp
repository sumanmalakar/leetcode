#include<iostream>
#include<vector>
using namespace std;
//https://leetcode.com/problems/search-a-2d-matrix-ii/
//this code accepted on leet code
//do binary search in each row

bool search_in_2D(vector<vector<int>> &matrix, int target){
  for (int i = 0; i < matrix.size(); i++)
  {  int s = 0;
    int e = matrix[i].size() - 1;
    while (s <= e)
    {
      int mid = (s + e) / 2;
      if (matrix[i][mid] == target)
      {
        return true;
      }
      else if (matrix[i][mid] > target)
      {
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }
  }
 return false;
}

int main(){
 vector<vector<int>> v = {{1,3,4,5},{10,11,16,20},{23,30,24,50}};
 int k = 51;
 int n = search_in_2D(v,k);
 if(n==1){
   cout<<"Element is present ";
 }else{
   cout<<"Element is not preset ";
 }
}