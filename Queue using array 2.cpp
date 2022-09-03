#include<iostream>
using namespace std;
#define size 7
class queueusingarray
{
	public:
		int queue[size];
		int front;
		int rear;
		
		queueusingarray()
	{
	 front=-1;
		 rear=-1;
	}
	void enqueue(int x)
	{
		if(rear==-1)
		{
			cout<<"The queue is overflowed"<<endl;
		}
		else if(front==-1 && rear==-1)
		{
		front=0;
		rear=0;
		queue[rear]=x;	
		}
		else if
		{
			rear++;
			queue[rear]=x;
		}
	}
	void dequeue()
    {
    	if(front==-1 && rear==-1)
    	{
    		cout<<"underflow"<<endl;
		}
		else if(front ==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			cout<<queue[front];
			front++;
		}
	}
	void display()
	{
		int i;
		if(front==-1 && rear==-1)
		{
			cout<<"The queue is empty"<<endl;
		}
		else
		{ for (i=front,i<rear+1,i++)
		{cout<<queue[i];
		}
		}
	}
	void peek()
	{
		if(front==-1 && rear==-1)
		{
			cout<<"empty queue";
		}
		else
		{
			cout<<queue[front];
		}
	}
};

int main()
{
queueusingarray S;
S.enqueue(4);
S.enqueue(5);
S.enqueue(7);
S.enqueue(9);
S.dequeue(x);
S.display();
S.peek();
S.dequeue();
S.peek();
S.display();
return 0;
}
