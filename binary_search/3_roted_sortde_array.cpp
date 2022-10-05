#include<bits/stdc++.h>
using namespace std;

int no_of_roteted_array(vector<int> &v){
  int s =0;
  int e = v.size() -1;
  int n = v.size();
  int rotation;
  while(s<=e){
   int mid = (s+e)/2;


   int next = (mid+1)%n;
   int pre = (mid + n -1)%n;

   if(v[mid]<=v[next] && v[mid]<=v[pre]){
    //  rotation =  mid;
    rotation = v[mid];
    break;
   }
  
   else if (v[e] >= v[mid])
   {
     e = mid - 1;
   }
   else if (v[mid] >= v[s])
   {
     s = mid + 1;
   }
  }
  return rotation;
}

int main(){
  vector<int> v = {6,8,15,16,-1,1,2,3,4,5};

  cout << no_of_roteted_array(v);


  return 0;
}