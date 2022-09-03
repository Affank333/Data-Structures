#include<iostream>
using namespace std;
 struct node
 {
 	int data;
		 node *next;
 };
 class linkedlist
 {
 	public:
 		node *head;
 		node *temp;
        	
			linkedlist()
    	{
    		head=NULL;
		}
		void insertion()
		{
			node *newnode=new node;
			head=temp;
			cout<<"Enter the data"<<endl;
			cin>>newnode->data;
			if(head==NULL)
			{
				head=temp;
				newnode=temp;
			}
			else
			{
				newnode->next=temp;
				temp=newnode;
			}
		}
		void display()
		{
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data;
				temp=temp->next;
			}		
		}
		  
 };
 int main()
 {
 	linkedlist l;
 	l.insertion();
 	l.insertion();
 	l.display();
 }
