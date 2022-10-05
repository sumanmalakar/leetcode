#include <bits/stdc++.h>
using namespace std;

void push_at_bottom(stack<int> &s, int data)
{
  if (s.empty())
  {
    s.push(data);
    return;
  }
  int temp = s.top();
  s.pop();
  push_at_bottom(s, data);
  s.push(temp);
}

void reverse_stack(stack<int> &s){
  if(s.empty()){
    return;
  }
  int data = s.top();
  s.pop();
  reverse_stack(s);
  push_at_bottom(s, data);
}

int main()
{
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);

  reverse_stack(s);
  cout << "after reverse \n";
  while (!s.empty())
  {
    cout << s.top() << endl;
    s.pop();
  }
}