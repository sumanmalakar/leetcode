#include<iostream> 
#include<vector>
#include<bits/stdc++.h>
using namespace std; 

//not a optimise approach
void sort_with_extra_space(vector<int> &n1, vector<int> &n2){ 
  int s1 = n1.size();
  int s2 = n2.size();
  vector<int>v;
  for(int i=0; i<s1; i++){
    v.push_back(n1[i]);
  }
  for (int i = 0; i <s2; i++)
  {
    v.push_back(n2[i]);
  }
  sort(v.begin(), v.end());

for(int i=0; i<s1; i++){
    n1[i] = v[i];
  }
  for(int i=0; i<s2;i++){
    n2[i] = v[s1+i];
  }
}

//another method 
void sort_without_extra_space(vector<int> &n1, vector<int> &n2){
  int s1 = n1.size();
  int s2 = n2.size();
  for(int i=0; i<s1; i++){
    if(n1[i]>n2[0]){
      swap(n1[i],n2[0]);
      sort(n2.begin(), n2.end());
    }
  }
}

  int main()
{
  vector<int> n1 = {1, 5, 9, 10, 15, 20};
  vector<int> n2 = {2, 3, 8, 13};

  // sort_with_extra_space(n1, n2);
  sort_without_extra_space(n1,n2);

  for (int i = 0; i < n1.size(); i++)
  {
    cout << n1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < n2.size(); i++)
  {
    cout << n2[i] << " ";
  }

  return 0;
}