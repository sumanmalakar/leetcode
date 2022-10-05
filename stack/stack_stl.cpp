#include<bits/stdc++.h>
using namespace std;

int main(){
stack<string> books;

books.push("c++");
books.push("java");
books.push("python");
books.push("php");

while(!books.empty()){
  cout<<books.top()<<endl;
  books.pop();
}

return 0;
}