#include<bits/stdc++.h>
using namespace std;

void print_permutation(string ques, string asf){
  if(ques.length() == 0){
    cout<<asf<<endl;
    return;
  }
  
  for(int i=0; i<ques.size(); i++){
    char ch = ques[i];
    string left = ques.substr(0,i);
    string right = ques.substr(i+1);
    string req = left + right;
    print_permutation(req, asf+ch);
  }
}

int main(){
  string str = "123";
print_permutation(str, "");
}