#include <bits/stdc++.h>
using namespace std;
class LinkedListADT
{
  struct node
  {
    int item;
    node *next;
  };
  node *start;

  node* search(int data){
    node *t;
    if(start == NULL)return NULL;
    t = start;
    while(t!=NULL){
      if(t->item == data){
        return t;
      }
    }
    return NULL;
  }

public:
  LinkedListADT()
  {
    start = NULL;
  }
  int countItems()
  {
    if (start == NULL)
      return 0;
    node *temp;
    int count = 0;
    temp = start;
      while (temp->next != NULL)
      {
        count++;
        temp = temp->next;
      }
    
    return count+1;
  }

  void insert_At_Start(int data)
  {
    node *n = new node;
    n->item = data;
    n->next = start;
    start = n;
  }

  void insert_At_Last(int data)
  {
    node *temp, *n = new node;
    n->item = data;
    n->next = NULL;

    if (start == NULL)
    {
      start = n;
    }
    else
    {
      temp = start;
      while (temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = n;
    }
  }

// insert_after is not working , improve this
  void insert_After(int currentData, int data)
  {
    if (start == NULL)
    {
      cout << "Insertion not possible \n";
    }
    else
    {
      node *temp, *n = new node;
      n->item = data;
      temp = start;
      while (temp->next != NULL)
      {
        if (temp->item == currentData)
        {
          // n->item = data;
          n->next = temp;
          temp->next = n;
          break;
        }
        temp = temp->next;
      }
      if (temp->next == NULL)
      {
        cout << "No Such Position exist \n";
      }
    }
  }

  int search_Item(int data)
  {
    if (start == NULL)
    { 
      return 0;
    }
    else
    {
      node *temp;
      temp = start;
      int position = 0;
      while (temp->next != NULL)
      { position++;
        if (temp->item == data)
        {
          return position;
        }
        temp = temp->next;
      }
      return -1;
    }
  }

  int delete_Item_From_Start()
  {
    if (start == NULL)
    {
      return 0;
    }
    else
    {
      node *temp;
      temp = start;
      start = temp->next;
      delete (temp);
      return 1;
    }
  }

  int delete_Item_FromLast()
  {
    if (start == NULL)
    {
      return 0;
    }
    else if (start->next == NULL)
    {
      delete (start);
      start = NULL;
      return 1;
    }
    node *temp1, *temp2;
    temp1 = temp2 = start;
    while (temp1->next != NULL)
    {
      temp2 = temp1;
      temp1 = temp1->next;
    }
    temp2->next = NULL;
    delete (temp1);
    return 1;
  }

  int delete_Current_Item(int currentData)
  {
    if (start == NULL)
      return 0;
    node *temp1, *temp2;
    temp1 = temp2 = start;
    if (temp1->next == NULL)
    {
      delete_Item_From_Start();
      return 1;
    }
    else
    {
      while (temp1->item != currentData)
      {
        temp2 = temp1;
        temp1 = temp1->next;
      }
      if (temp1->item == currentData)
      {
        temp2->next = temp1->next;
        delete (temp1);
        return 1;
      }
      else
      {
        return 0;
        ;
      }
    }
  }

  void sort_list(){
    node *t;
    int r,i,x,n;
    n = countItems();
    for(r=1; r<n; r++){
      t = start;
      for(i=0; i<=n-1-r; i++){
        if(t->item > t->next->item){
          x = t->item;
          t->item = t->next->item;
          t->next -> item = x;
        }
        t = t->next;
      }
    }
  }

  void edit_Item(int currentData, int newData)
  {
    if (start == NULL)
    {
      cout << "Edit not possible\n";
      return;
    }
    node *temp;
    temp = start;
    while (temp->item != currentData)
    {
      temp = temp->next;
    }
    if (temp->item == currentData)
    {
      temp->item = newData;
      return;
    }
    else
    {
      cout << "Element not found\n";
      return;
    }
  }

  void view_list(){
    if(start == NULL){
      cout<<"Link_List Not exist\n";
    }
    node* temp;
    temp = start;
    while(temp!=NULL){
      cout<<temp->item<<"->";
      temp = temp->next;
    }
  }
  int get_first_Item(){
    if(start == NULL){
      cout<<"list is empty ";
      return -1;
      }
      
      return (start->item);
  }

  int get_Last_Item(){
    if(start == NULL){
      cout << "list is empty ";
      return -1;
    }
    node *temp;
    temp = start;
    while(temp->next != NULL){
      temp = temp ->next;
    }
    return temp->item;
  }

  ~LinkedListADT()
  {
    while (start != NULL)
    {
      delete_Item_FromLast();
    }
  }
};

int main()
{
 LinkedListADT l1;
// cout<<l1.get_first_Item();
l1.insert_At_Start(10);
// l1.insert_At_Start(20);
l1.insert_At_Start(30);
l1.insert_At_Start(40);
l1.insert_At_Last(20);
// l1.insert_At_Last(30);
// l1.insert_At_Last(40);

// l1.insert_After(20,5);


// cout<<l1.countItems();
// cout<<l1.get_first_Item();
// cout<<l1.get_Last_Item();
// cout<<l1.view_list();
l1.view_list();
cout<<endl;
// l1.sort_list();
// l1.delete_Current_Item(10);
l1.edit_Item(10,100);
l1.view_list();

return 0;
}