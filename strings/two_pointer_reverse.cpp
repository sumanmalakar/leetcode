#include<iostream> 
using namespace std; 

 int main(){
   string s = "leetcado";
   int n = s.length();
   int i = 0;
   int j = n - 1;
   while (i < j)
   {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
     { cout<<"this is i "<<i<<endl;
       swap(s[i], s[j]);
       i++;
       j--;
     }
     else if (s[j] != "aeiou" )
     {
       cout<<"this is j "<<j<<endl;
       j--;
     }

     else
     {
       i++;
     }
     cout<< " loop i "<<i<<" loop j"<<j<<endl;
   }
cout<<s;

   return 0;
}