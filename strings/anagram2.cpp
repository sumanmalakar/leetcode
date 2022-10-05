#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s1 = "aaaaaabb";
  string s2 = "abaaaaac"; 
  int i,j;
  bool isAnagram;
  int n1 = s1.length();
  int n2 = s2.length();
  bool visited [n2];
  if (n1 != n2)
  {
    isAnagram = false;
  }
  else
  { 
    for( i=0; i<n1; i++){
      for(j=0; j<n2; j++){
        if(s1[i]==s2[j] && !visited[j]){
          isAnagram = true;
          visited[j] = true;
          break;
        }
      }
      if (j==n2)
      { isAnagram=false;
        break;
      }
    }

  }

  if(isAnagram == true){
    cout<<"s1 is Anagram of s2 ";
  }
  else{
    cout<<"s1 is Not Anagram of s2";
  }

  return 0;
}