#include<bits/stdc++.h>
using namespace std;

bool areOccurrencesEqual(string s)
{
  int freq[123];
  vector<int> v;
  for (int i = 0; i < s.length(); i++)
  {
    int index = (int)s[i];
    freq[index]++;
  }
  for (int i = 97; i < 123; i++)
  {
    if (freq[i] > 0)
    {
      v.push_back(freq[i]);
    }
  }
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] != v[i + 1])
    {
      return false;
    }
  }
  return true;
}

int main(){
  string s = "abacbc";
  // int n = areOccurrencesEqual(s);
  // if(n==0){
  //   cout<<"false";
  // } else{
  //   cout<<"true";
  // }
  int freq[123] = { 0 };
  vector<int> v;
  for (int i = 0; i < s.length(); i++)
  {
    int index = (int)s[i];
    freq[index]++;
  }
  for (int i = 97; i < 123; i++)
  {
    if (freq[i] > 0)
    {
      v.push_back(freq[i]);
    }
  }
   cout<<v.size()<<endl;

  int i;
  for ( i = 0; i < v.size()-1; i++)
  {
    if (v[i] != v[i + 1])
    {
      cout<<"false";
      break;
    } 
    // cout<<v[i]<<" ";
  }if(i==v.size()-1){
  cout<<endl<<"true";
   }
}
