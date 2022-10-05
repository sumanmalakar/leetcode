#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v = {1,2,3,4,5};
int d = 4;

for(int i=0; i<d; i++){
  v.push_back(v[0]);
  v.erase(v.begin());
}

for(int i=0; i<v.size(); i++){
  cout<<v[i]<<" ";
}



}