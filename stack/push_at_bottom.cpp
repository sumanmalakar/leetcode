#include<bits/stdc++.h>
using namespace std;

void push_at_bottom(stack<int> &s, int data){
 if(s.empty()){
   s.push(data);
   return;
 } 
 int temp = s.top();
 s.pop();
 push_at_bottom(s, data);
 s.push(temp);

}

int main(){
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
int data = 5;
push_at_bottom(s, data);
while(!s.empty()){
  cout<<s.top()<<endl;
  s.pop();
}
}