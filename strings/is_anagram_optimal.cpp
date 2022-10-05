#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s1 = "a@#&bc";
  string s2 = "&abc@#";

  int n1 = s1.length();
  int n2 = s2.length();
  bool isAnagram;

  // frequency arr;
  int arr1[256] = { 0 };
  int arr2[256] = { 0 };

  if (n1 != n2)
  {
    isAnagram = false;
  }
  else
  { //for arr1
    for (int i = 0; i < n1; i++)
    {
      int index = (int)s1[i];
      arr1[index]++;
    }

   // for arr2
    for (int i = 0; i < n2; i++)
    {
      int index = (int)s2[i];
      arr2[index]++;
    }
      
      //comparing both the array
    for (int i = 0; i <256; i++)
    {
      if (arr1[i] != arr2[i])
      {
        isAnagram = false;
        break;
      }
    }
  }

  if(isAnagram)
  {
    cout << "s1 is Anagram of s2 ";
  }
  else
  {
    cout << "s1 is Not Anagram of s2";
  }

  return 0;
}