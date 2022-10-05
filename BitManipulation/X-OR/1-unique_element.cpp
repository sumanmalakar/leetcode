#include<bits/stdc++.h>
using namespace std; 

// input = {5,4,1,4,3,5,1,3,10};
// output = {10}

 int main(){
vector<int> v = {5,4,1,4,3,5,1,3,10};
int res = 0;
for(int i=0; i<v.size(); i++){
  res = res^v[i];
}
  cout<<res;


return 0;
}