#include <iostream>
#include <vector>
using namespace std;
bool uniqueOccurrences(vector<int> &arr)
{
  int i, j, count;
  vector<int> v;
  for (i = 0; i < arr.size(); i++)
  {
    count = 1;
    for (j = i + 1; j < arr.size(); j++)
    {
      if (arr[i] == arr[j])
      {
        count = count + 1;
        arr.erase(arr.begin() + j);
        j = j - 1;
      }
    }
    v.push_back(count);
  }
 for(int i =0; i<v.size(); i++){
   for(int j = i+1; j<v.size(); j++){
     if(v[i]==v[j]){
       return false;
     }
   }
 }
 return true;

}

int main()
{
  vector<int> arr = {1, 2, 2, 1, 1, 3,2};
  cout<<uniqueOccurrences(arr);

  return 0;
}