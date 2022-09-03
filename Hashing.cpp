#include<iostream>
#include<string>
using namespace std;
const int tab_size =200;
class HashingEntry
{
    public:
    	int val;
        int pos;
        HashingEntry(int pos, int val)
        {
            this->pos =pos;
            this->val = val;
        }
};
class HashingMap
{
    private:
        HashingEntry **tab;
    public:   
        HashingMap()
	{
            tab = new HashingEntry * [tab_size];
            for (int a = 0; a< tab_size;a++)
            {
                tab[a] = NULL;
            }
        }
        int HashingFunc(int pos)
        {
            return pos % tab_size;
        }
	
 void del(int pos)
	{
	    int hash = HashingFunc(pos);
	    while (tab[hash] != NULL)
	    {
	        if (tab[hash]->pos == pos)
	            break;
	        hash = HashingFunc(hash + 1);
	    }
            if (tab[hash] == NULL)
	    {
                cout<<"No Element found at position "<<pos<<endl;
                return;
            }
            else
            {
                delete tab[hash];
            }
            cout<<"Element Deleted"<<endl;
        }
        void insertion(int pos, int val)
	{
            int hash = HashingFunc(pos);
            while (tab[hash] != NULL && tab[hash]->pos != pos)
            {
                hash = HashingFunc(hash + 1);
            }
            if (tab[hash] != NULL)
                delete tab[hash];
            tab[hash] = new HashingEntry(pos, val);
	}
        int searching(int pos)
	{
	    int  hash = HashingFunc(pos);
	    while (tab[hash] != NULL && tab[hash]->pos != pos)
	    {
	        hash = HashingFunc(hash + 1);
	    }
	    if (tab[hash] == NULL)
	        return -1;
	    else
	        return tab[hash]->val;
        }
        ~HashingMap()
	{
            for (int a = 0; a < tab_size; a++)
            {
                if (tab[a] != NULL)
                    delete tab[a];
                delete[] tab;
            }
        }
};
int main()
{
    HashingMap hash;
    int pos, val;
    int ch;
    while (1)
    {        cout<<"Operations to be performed on Hash Table"<<endl;
        cout<<"1.Insert element in table"<<endl;
        cout<<"2.Delete element at any position"<<endl;
        cout<<"3.Search element from position"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your desired choice: ";
        cin>>ch;
        if(ch==1)
        {
            cout<<"Enter position at which element to be inserted: ";
            cin>>pos;
			cout<<"Enter element to be inserted: ";
            cin>>val;
            hash.insertion(pos, val);
    }
		if(ch==2)
	{
           cout<<"Enter position of the element u want to delete: ";
            cin>>pos;
            hash.del(pos);
 }
	    if(ch==3)
             {cout<<"Enter position of the element u want  to search: ";
            cin>>pos;
            if (hash.searching(pos) == -1)
        {
	        cout<<"No element found at position "<<pos<<endl;
	        continue;
	    }
	    else
	    {
	        cout<<"Element at position "<<pos<<" : ";
	        cout<<hash.searching(pos)<<endl;
	    }
    }
       if(ch==4)
	   {
	   	cout<<"Exit the program"<<endl;
		}
    }
    return 0;
}
