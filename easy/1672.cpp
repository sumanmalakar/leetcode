#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<vector<int>> accounts = {{1,2},{3,4},{6,8,9,9,9}};
  vector<int> v;
  v.push_back(1);
  cout<<"before "<<accounts.size()<<endl;
  // cout << accounts[2][1] << endl;
  accounts.push_back(v);
  cout <<"after "<< accounts.size() << endl;
}