#include<iostream>
using namespace std;


struct node
{
	int data;
	int value;
	node *next;
};

class Singlylinkedlist
{
	private:
	node *head;
	node *tail;
	node *temp;
    public:
    	singlylinkedlist()
    	{
    		head=NULL;
             tail=NULL;
		}
 void Createnewnode(int data)
{
	node *temp=new node;
	int value;
	cout<<"DATA";
	cin>>temp->data;
	temp->next=NULL;
	if(head=NULL)
	{
	head=temp;
	tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}
}
void insertionatstart(	int data)
{

	node *temp=new node;
	cout<<"Enter the value of noode";
	cin>>temp->data;
	temp->next=head;
	temp=head;
}
void insertionatlast(	int data)
{
node *current=new node;
   cout<<"Enter the value of node";
   cin>>current->data;
   temp=head;
   while(temp->next!=NULL)
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
while(temp->next!=NULL)
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
	temp->next=NULL;
delete temp;
}
void deletefromend()
{
	node*temp;
	while(temp->next!=tail)
	{
		temp=temp->next;
	}
	temp->next=NULL;
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
	while(temp!=0)
	{
		count++;
		temp=temp->next;
	}
}
void  Display()
{
	temp=head;
	cout<<"The Liked List is :: ";
	while(temp!=0)
	{
		cout<<temp->data<<",";
		temp=temp->next;
	}
	cout<<endl;
}
};

int main()
{
	Singlylinkedlist S;
	S.Createnewnode(2);
	S.Createnewnode(5);
	S.Createnewnode(4);
	S.Createnewnode(3);
	S.insertionatstart(7);
	S.insertionatlast(9);
	S.insertionatposition(11);
	S.deletefromstart();
	S.deletefromend();
	S.deletefromposittion();
	S.Display();
	S.length();
	system("pause");
	return 0;
	}
