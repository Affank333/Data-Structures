#include<iostream>
using namespace std;
class HashTable
{
private :
	int size, range;
	int arr[];
public:
	HashTable()
	{
		this->size=size;
		this->range=range;
		cout<<"Enter the size "<<endl;
		cin>>size;
		arr[size];
		for(int a= 0 ;a<size;a++)
		{
			arr[a] = -1;
		}
		cout<<"Enter the range : ";
		cin>>range;
		while(range > size)
		{
			cout<<"Please enter the correct range "<<endl;
			cin>>range;
		}
	}
	int insertion(int value)
	{
		int hash = value % range;
		if(arr[hash] == -1)
		{
			arr[hash] = value;
		}
		else
		{
			int start = hash + 1;
			if(start >= size)
			{
				start = 0;
			}
			for(int a = start;a < size;a++)
			{
				if(start >= size - 1)
				{
					start = 0;
				}
				if(arr[a] == -1)
				{
					arr[a] = value;
					break;
				}
				if(a == start - 1)
				{
					cout<<"Array is Full!!"<<endl;
					break;
				}
			}
		}
	}
int searching(int value)
	{
		for(int a = 0;a <size;a++)
		{
			if(arr[a] == value)
			{
				value = arr[a];
				break;
			}
		}
		return value;
	}
	void print()
	{
		for(int a = 0;a < size;a++){
			cout<<arr[a]<<" ";
		}
		cout<<endl;
	}
};
int main()
{
	HashTable hashing;
	hashing.insertion(10);
	hashing.insertion(347);
	hashing.insertion(111);
	hashing.insertion(43);
	hashing.searching();0
	hashing.print();
	return 0;
}

