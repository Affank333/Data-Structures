#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class linkedlist
{
	private:
	node *head;
	node *temp;

	public:
		linkedlist()
		{
			head=Null;
			tail=temp=null;
		}
		void insert()
		{
			node* temp1=Null;
			temp=new node;
			temp1->data=a;
			temp1->next=null;
			if(head== Null)
			{
				head=temp1;
				temp=temp1;
			}
			else
			{
				temp->next=temp1;
				temp=temp->next;
			}
					}
					void display()
					{
						head=temp;
						while(temp->next!=Null)
						{
							cout<<temp->data<<endl;
							temp=temp->next;
						}
						temp=temp->next;
					}
};
int main()
{
	linkedlist l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.display();
	system("pause");
	return 0;
}

