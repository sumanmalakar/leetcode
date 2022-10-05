#include<bits/stdc++.h>
using namespace std;

// struct memebers are by defualt public

struct Node{ 
  // public:
  int data;
  struct Node* left;
  struct Node *right;

  Node(int val){
    data = val;
    left = right = NULL;
  }

};

void pre_order(Node *node)
{
  if (node == NULL)
    return;

  cout << node->data<<" ";
  pre_order(node->left);
  pre_order(node->right);
}

void post_order(Node *node){
  if(node == NULL) return;

  post_order(node->left);
  post_order(node->right);
  cout<<node->data<<" ";
}

void in_order(Node *suman){
  if(suman == NULL) return ;
  in_order(suman->left);
  cout<<suman->data<<" ";
  in_order(suman->right);
}

void level_order_print(Node *root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    Node *temp = q.front();
    if(temp == NULL){
      cout<<endl;
      q.pop();
      // insert a new null for the next level
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      q.pop();
      cout<<temp->data<<" ";

      if(temp ->left){
        q.push(temp->left);
      }
      if(temp ->right){
        q.push(temp->right);
      }
    }
  }
}



void print_level_order(Node *root)
{
  queue<Node *> q;
  q.push(root);
  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();
    cout << temp->data <<" ";
    if (temp->left)
    {
      q.push(temp->left);
    }
    if (temp->right)
    {
      q.push(temp->right);
    }
  }
}

Node * level_order_build(){
  int d;
  cin>>d;
Node *root = new Node(d);
queue<Node *>q;
q.push(root);

while(!q.empty()){
  Node *current = q.front();
  q.pop();
  
  int c1, c2;
  cin>>c1>>c2;

  if(c1!=-1){
    current->left = new Node(c1);
    q.push(current->left);
  } 

  if(c2!=-1){
    current->right = new Node(c2);
    q.push(current->right);
  }
}

return root;
}  

 int Height_of_tree(Node *root){
   if(root == NULL) return 0;

   int h1 = Height_of_tree(root->left);
   int h2 = Height_of_tree(root->right);

   return 1 + max(h1,h2);
 }

int diameter(Node *root){
  // base case
  if(root == NULL){
    return 0;
  }


  // rec case
  int D1 = Height_of_tree(root->left) + Height_of_tree(root->right);
  int D2 = diameter(root->left);
  int D3 = diameter(root->right);
  
  return max(D1, max(D2,D3));
}

void sum_of_last_leaf(Node *root, vector<int> &v)
{
  queue<Node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    Node *temp = q.front();
    if (temp == NULL)
    {
      v.push_back(-1);
      q.pop();
      // insert a new null for the next level
      if (!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      q.pop();
      v.push_back(temp->data);

      if (temp->left)
      {
        q.push(temp->left);
      }
      if (temp->right)
      {
        q.push(temp->right);
      }
    }
  }
}

int main(){
  struct Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root -> left->left = new Node(4);
  root->left->right = new Node(5);
  root->left->right->left = new Node(8);
  root->right->left  = new Node(6);
  root->right->right = new Node(7);
  root->right->right->left = new Node(9);
  root->right->right->right = new Node(10);
  
  // cout<<"pre_order ";
  // pre_order(root);
  // cout<<endl<<"post_order ";
  // post_order(root);
  // cout<<endl<<"in_order ";
  // in_order(root);

  // cout<<endl;
  // cout<<"level order traversal \n";
  level_order_print(root);

  // cout<<endl;
  // cout<<" level order efficient \n";
  // print_level_order(root);

  // cout<<"Height of a tree is "<<Height_of_tree(root)<<endl;
  // cout<<"Diameter of a tree is "<<diameter(root)<<endl;

  cout<<endl;
  vector<int>s;
  vector<int>res;
  sum_of_last_leaf(root, s);
 
  res.push_back(s[0]);
  for(int i=2; i<s.size(); i++){
        if(s[i-1]==-1){
          res.push_back(s[i]);
        }
  }
  cout << endl;

  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i] << " ";
  }
  cout<<endl;
  int n = s.size();
  int i = n-2;
  int sum = 0;
  while(s[i]!=-1){
   sum+= s[i];
 
   i--;
  }
  // cout<<sum;

}