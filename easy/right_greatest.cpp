#include<iostream> 
#include<vector>
using namespace std;
vector<int> replaceElements(vector<int> &arr)
{ int i,j,k;
vector<int>v;
for(i=0; i<arr.size()-1; i++){
  k = arr[i+1];
  for(j=i+2; j<arr.size(); j++){
    if(k<arr[j]){
      k = arr[j];
    }
  }
  v.push_back(k);
}
v.push_back(-1);
return v;
}

 int main(){
   vector<int> v = {17};
   vector<int> s = replaceElements(v);
   for (int i = 0; i < s.size(); i++)
   {
     cout << s[i] << " ";
}
  

return 0;
}