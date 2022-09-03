#include <iostream>
using namespace std;
struct Node
{
int data;
Node *link;
};
Node *top = NULL;
bool isempty()
{
 if(top == NULL)
{
  return true; 
 }
 else
 {
 return false;
}
void push (int value)
{
  Node *ptr = new Node();
  ptr->data = value;
  ptr->link = top;
  top = ptr;
}
void pop ( )
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
 {
  Node *ptr = top;
  top = top -> link;
  delete(ptr);
 }
}
void showTop()
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
  cout<<"Element at top is : "<< top->data;
}
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         push(value);
         break;
 case 2: pop();
         break;
 case 3: showTop();
         break;
 case 4: displayStack();
         break;
 case 5: flag = 0;
         break;
 }
 }

return 0;
}
