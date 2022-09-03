#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}
class Singly_Circular_Linkedllist
{
	private:
		node *head;
		node *tail;
		node *temp;
		public:
			circularlinkedlist()
			{
				haed=NULL;
				tail=NULL;
			}

void Create_node(int data)
{
 node *temp=newnode;
 cout<<"Enter data"<<endl;
 cin>>temp->data;
 temp->next=head;
 if(head=NULL)
 {
 	head=temp;
 	tail=temp;
 }
 else
 {
 	tail->next=temp;
 	temp=tail;
 }
}
void insertionatstart(int data)
{
	node *temp=new node;
	cout<<"Enter data";
	cin>>temp->data;
	temp->next=head;
	temp=head;
	tail=head;
}
void insertionatlast(	int data)
{
node *current=new node;
   cout<<"Enter the value of node";
   cin>>current->data;
   temp=head;
   while(temp->next!=head)
   {
   	temp=temp->next;
   }
   temp->next=current;
}
void insertionatposition(int data)
{
	node *current=new node;
	int pos;
	cout<<"Enter the position";
	cin>>pos;
	temp=head;
	for(int i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	cout<<"Enter the data";
	cin>>current->data;
	current->next=temp->next;
	temp->next=current;
}
void searching(int data)
{   cout<<"heloo"<<endl;
	if(head==NULL)
	{
		cout<<"Empty";
		return ;
}
node *temp;
temp=head;
bool found=false;
if(temp->value==data)
{
		cout<<"Value found";
	return ;
}
while(temp->next!=head)
{
	if(temp->value==data)
	{
		found=true;
			cout<<"Value found";
			cout<<temp->value;
			break;
	}
	temp=temp->next;
    if(found==false)
    {cout<<"no value";
	}
	else
	{
	return ;
	}
}
	}
	void deletefromstart()
{
	node *temp;
	temp=head;
	head=head->next;
	temp->next=head;
delete temp;
}
void deletefromend()
{
	node*temp;
	while(temp->next!=tail)
	{
		temp=temp->next;
	}
	temp->next=head;
	tail=temp;
}
void deletefromposittion()
{
	struct node *current;
	temp=head;
	int pos;
	cout<<"Enter the possition for which do you want to delete :: ";
	cin>>pos;
	for(int i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	current=temp->next;
	temp->next=current->next;
	delete current;
}
void length()
{
	int count=0;
	temp=head;
	while(temp!=head)
	{
		count++;
		temp=temp->next;
	}
}
void  Display()
{
	temp=head;
	cout<<"The Liked List is :: ";
	while(temp!=head)
	{
		cout<<temp->data<<",";
		temp=temp->next;
	}
	cout<<endl;
}

}

