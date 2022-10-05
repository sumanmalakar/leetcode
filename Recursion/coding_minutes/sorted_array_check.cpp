#include<bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int>&v, int index){
  if(index == v.size()){
    return true;
  }

  if(v[index]>v[index+1]){ 
    return false;}
  return is_sorted(v, index+1);
  
}

int main(){
// vector<int>v = {1,200,300,400};
//   int n = is_sorted(v,0);
//   if(n==1){
//     cout<<"true";
//   }else{
//     cout<<"false";
//   }
int n = 8;
cout<<n%2;
cout<<endl<<n;
}