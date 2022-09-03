#include<iostream>
using namespace std;
struct node
{
	node *next;
	int  data;
	
};
class linkedlist
{
	private:
		node *head;
		node *tail;
		node *temp;
		public:
	linkedlist()
	{
		head=NULL;
		tail=temp=NULL;
	}
			void insert(int a)
			{   
			
				node *temp1 = NULL;
				temp1 = new node;
				temp1->data=a;
				temp1->next=NULL;
				if(head==NULL)
				{
				head=temp1;
				tail=temp1;
			}
			else {
				tail->next=temp1;
				tail=tail->next;
			}
		}
		
	void deleteNode(Node* head, int data) 
{ 
    // Store head node 
    Node* temp = *head; 
    Node* prev = NULL; 
    // If head node itself holds 
    // the key to be deleted 
    if (temp != NULL && temp->data == data) 
    { 
        *head_ref = temp->next; // Changed head 
        delete temp;            // free old head 
        return; 
    }   
    // Else Search for the key to be deleted,  
    // keep track of the previous node as we 
    // need to change 'prev->next' */ 
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
    // If key was not present in linked list 
    if (temp == NULL) 
        return; 
    // Unlink the node from linked list 
    prev->next = temp->next; 
    // Free memory 
    delete temp; 
} 	
		void display()	
		{
		node *temp;
		temp=head;
		while(temp->next!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
		temp=temp->next;
	}	
};
int main()
{
	linkedlist L;
	L.insert(1);
	L.insert(3);
	L.insert(2);
	L.display();
	system("pause");
	return 0;
}
