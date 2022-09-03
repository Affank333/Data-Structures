#include <iostream>
using namespace std;
struct node 
{	
    int data;
    struct node* next;
};
void ReversePrint(struct node* head) 
{
    if(head == NULL) return;
    ReversePrint(head->next);
    cout<<head->data;
}
int main()
{
    struct node first;
    struct node second;
    struct node third;
    first.data = 1;
    second.data = 2;
    third.data = 3;
    first.next = &second;
    second.next = &third;
    cout<<&first; // Should print: 3 2 1
    cout<<"\n";
    return 0;
}
