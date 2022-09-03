#include<iostream>
using namespace std;
struct node 
{
   int data;
node *next;
};
node *head = NULL;
node *temp = NULL;
node *newnode=new node;
void reverse_print(struct node *list) 
{
   if(new node == NULL) 
   {
      cout<<"null  ";
      return;
   }
   reverse_print(newnode->next);
   cout<<newnode->data;  
}
void insert(int data) 
{
   node *newnode;
   newnode->data = data;
   newnode->next = NULL;
   if(head==NULL) 
   {
      head = newnode;
      return;
   }
   node *current;
   current = head;
   while(temp->next!=NULL)
      temp = temp->next;
   temp->next = newnode; 
}

int main() 
{
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 
   reverse_print(head);
   return 0;
}
