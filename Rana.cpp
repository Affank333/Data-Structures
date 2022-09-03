#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};

class linkedList
{
public:
    node* head;
    node* tail;
    int cl;
    linkedList()
    {
        head=NULL;
        tail=NULL;
        cl=0;
    }

    void insertatpos(int pos,int value)
    {
        if((pos-1)>length())
        {
           cout<<"Given Position increases current list length i.e "<<length()<<endl;
        }
        else{
        node* temp=new node;
        if(pos==1)
        {
            temp->data=value;
            temp->next=head;
            head=temp;
            cl++;
        }
        else
        {
        node* pre=new node;
        node* post=new node;
        post=head;

        int  i = 1;
        while(i < pos)
        {
            pre = post;
            post = post->next;
            i++;
        }

        temp->data = value;
        pre->next = temp;
        temp->next = post;
        cl++;
        }
        }
    }

    void Display() {
        node* current = head;
        if(empty()==0)
        {
            cout<<"List is Empty!!!";
        }
        else
        {
        for(int i=1;current != NULL;i++)
        {
            if(i==1)
            {
                cout<<endl;
                cout<<"List is: \n";
            }
            cout <<i<<". "<<current->data <<endl;
            current = current->next;
        }
        cout<<endl;
    }
    }


    int popat(int pos)
    {
        if((pos)>length())
        {
            cout<<"Given Position increases current list length i.e "<<length()<<endl;
        }
        else{
                int reteval=0;
        node* temp=new node;
        if(pos==1)
        {
            reteval=head->data;
            temp=head->next;
            delete head;
            head=temp;
            cl--;
            return reteval;
        }
        else
        {
          node* current=new node;
          current = head;
          for(int i=1;i<=length();i++)
          {
              if(i==pos)
              {
                  reteval=current->data;
                  temp->next=current->next;
                  delete current;
                  cl--;
                  return reteval;
              }
              temp=current;
              current=current->next;
          }
        }
        }
    }

    int searchdata(int lnd)
    {
        int count=0;
        node* post=new node;
        post=head;
       int i=0;
       while(i<=length())
        {
            if(post->data==lnd)
            {
                count++;
                return count;
            }
            else
            {
                post=post->next;
                count++;
            }
            i++;
        };
        if(post->next==NULL)
        {
            return -1;
        }
    };
    int length()
    {
        if((head==NULL)&&(tail==NULL))
        {
            return 0;
        }
        return cl;
    }
    int empty()
    {
        if((head==NULL)&&(tail==NULL))
            return 0;
        else
            return 1;
    }
    void emptyness()
    {
        if(empty() == 1)
        cout<<"The List is Not Empty\n";
    else
        cout<<"The List is Empty\n";
    }
};

int main()
{
    linkedList l;
    l.emptyness();
    l.insertatpos(1,1);
    l.insertatpos(2,2);
    l.insertatpos(3,3);
    l.insertatpos(2,56);
    l.Display();
    cout<<"Searching for '56' \n";
    if(l.searchdata(56) >=1)
    cout<<"Data Found at "<<l.searchdata(56)<<endl;
    else
            cout<<"Data Not Found"<<endl;
    cout<<endl;
    cout<<"Before Poping data\n";
    l.Display();
    l.popat(2);
    cout<<"After Poping data\n";
    l.Display();
    l.emptyness();


    return 0;
}
