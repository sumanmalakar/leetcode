#include<iostream> 
#include<vector>
using namespace std;
void duplicateZeros(vector<int> &arr)
{
  int i,j,k, s =arr.size();
  vector<int> v;
  for(i=0; i<s; i++){
    v.push_back(arr[i]);
    if(arr[i]==0){
      for(j=i; j<s; j++){
        if(arr[j]==0){
          v.push_back(arr[j]);
          break;
        }
      }
    }
  }
  for(int k=0; k<s; k++){
    arr[k] = v[k];
  }

}

 int main(){
   vector<int> v = {1, 0, 2, 3, 0,0, 4, 5, 0};
   duplicateZeros(v);
   for (int i = 0; i < v.size(); i++)
   {
     cout << v[i] << " ";
}

  

return 0;
}