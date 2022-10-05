#include<bits/stdc++.h>
using namespace std;
// index = index;
//set = subset 
// sos = sum of subset
//tar = target
void print_sum_subset(vector<int>&arr, int i, string set, int sos, int tar){
  if(i==arr.size()){
    if (sos = tar)
    {
      cout << set << " ";
    }
    return;
  }
  
 
  print_sum_subset(arr, i+1, set =+ arr[i] +", " , sos=+arr[i], tar);
  print_sum_subset(arr, i+1, set,sos,tar);
}

int main(){
 vector<int>v = {10,20,30};
 print_sum_subset(v,0,"",0, 30);
}