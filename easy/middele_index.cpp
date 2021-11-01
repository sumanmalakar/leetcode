#include<iostream> 
#include<vector>
using namespace std; 

 int main(){
   vector <int> nums = {1};
   int s = nums.size();
   int i, j, k, x = 0, y = 0, r;
   if (s % 2 != 0)
   {
     k = (s + 1) / 2;
   }
   else
   {
     k = s / 2;
   }
   r = k;
   for (i = 0; i < k; i++)
   {
     x = x + nums[i];
   }
   cout << " x = " << x << endl;

   for (j = i + 1; j < s; j++)
   {
     y = y + nums[j];
   }
   cout<<" y = "<<y<<endl;
   if (x == y)
   {
    //  return r;
    cout<<r;
   }
   else
   {
    //  return -1;
    cout<<"-1";
   }

return 0;
}