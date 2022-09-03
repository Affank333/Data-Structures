#include<iostream>
using namespace std;

class stack
{
	private:
		int top;
		int arr[];
		int size;
		public:
			stack(int s)
			{
				size=s;
				top=-1;
				arr=new int[size];
				for(int i=0;i<size;i++)
				{
					arr[i]=0;
				}
			}
			bool isempty()
			{
				if(top==-1)
				{
                    return true;				
				}
				else 
				{
					return false;
				}
				
			}	
			bool isfull()
			{
				if(top==size-1)
				{
				    return true;
				}
				else
				{
					return false;
				}
				
			}
			int push(int value)
			{
				if(isfull())
				{
					cout<<"Stack is overflow";
					return 0;
				}
				else
				{
					top=top+1;
					arr[top]=value; 	
				}
			}
			int pop()
            {
            	if(isempty())
            	{
            		cout<<"Stack is empty";
            		return 0;
				}
				else
				{
					int prev;
					prev=arr[top];
					arr[top]=0;
				top=top-1;
				return prev;
				}
				
			}
			int count()
			{
			
				return(top+1);
			}
			int peek()
			{ 
			}
};
int main()
{
	stack S;
	S.push(3);
	S.push(4);
	S.push(5);
	S.push(6);
	S.push(7);
	cout<<S.pop()<<endl;
	cout<<S.pop()<<endl;
	cout<<S.pop()<<endl;
	cout<<S.pop()<<endl;
	cout<<S.pop()<<endl;
	
	return 0;
}
