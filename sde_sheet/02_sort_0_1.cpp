#include<iostream>
#include<vector>
using namespace std;

//input = {1, 0, 1, 0, 0, 1};
//output = { 0,0,0,1,1,1 };

void sort_f(vector<int> &v){
  int i=0;
  int j =0;
  while(i<v.size()){
  if(v[i] == 1){
    i++;
  }
  else if(v[i]==0){
    swap(v[i], v[j]);
    i++;
    j++;
  }
  }
  
}

int main(){
vector<int> v = {0,1,0,0,1,1,1,0,1,0,0,0,0,1,1};
 sort_f(v);

for(int i=0; i<v.size(); i++){
  cout<<v[i]<<" ";
}

}