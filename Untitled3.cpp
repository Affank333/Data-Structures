#include<iostream>
using namespace std;
struct node
{
	node *next;
	int data;
	node *prev;
}
class Doubly_linked_list
{
	private:
		node *head;
		node *tail;
		public:
			Doublylinkedlist()
			{
				tail=NULL;
 				head=NULL;
	            prev=NULL;
				next=NULL;		
			}
			
void Create_new_node(int data)
{
	node *temp=new node;
	cout<<"Enter the data";
	cin>>temp->data;
	if(head=NULL)//very good.
	{
		head=temp;
		tail=temp;
	}
	else
	{
		head->next=temp;
		tail=temp;
		
	}
}
void insertion_at_start(int data)
{
	node *temp=new node;
	cout<<"DATA";
	cin>>temp->data;
	temp->next=head;
	head->prev=temp->next;
	temp->prev=NULL;//?
	head=temp;
}
void insertion_at_end(int data)
{
	node *current=new node;
	cout<<"data";
	cin>>temp->data;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	current->prev=temp;
	temp->next=current->prev;
}
void insertion_at_position(int data)
{
	int pos;
	node *current=new data;
	cout<<"Data";
	cin>>current->data;
	cout<<"pos";
	cin>>pos;
	temp=head;
	for(int i=1;i<pos-1;i++)
	{
		current=current->next
	}
	temp->next=current->next;
	temp->next=currrent;
}
void searching(int data)
{   cout<<"heloo"<<endl;
	if(head==NULL)
	{
		cout<<"Empty";
		return ;
}
int cout=1;
cout<<"Enter th value to search";
cin>>data;
node *temp;
temp=head;
while(temp!=NULL)
{
	if(temp->value==data)
	{
			cout<<"Value found";
			cout<<temp->value;
			cout<<count;
			break;
	}
		temp=temp->next;
		count++;
	else
	{
	return ;
	}

}
void delete_at_start()
{
	if(head==NULL)
	{
		cout<<"EMPTY"<<endl;
	}
	node *temp;
	temp=head;
	head=head->next;
    temp->next=NULL;
    delete temp;
}
void delete_at_end()
{
	if(head==NULL)
	{
		cout<<"EMPTY"<<endl;
	}
	node *temp;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		}
		temp->prev=tail;
		tail->next=NULL;
		delete temp;	
}
void delete_at_position()
{
		if(head==NULL)
	{
		cout<<"EMPTY"<<endl;
	}
	node *temp;
	temp=head;
	int pos;
	node *current;
	for(int i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
	current=temp->next;
	temp->next=current->next;
	(temp->next)->prev=current; 
}
};
int main()
{
	Doubly_linked_list d;
	
}
