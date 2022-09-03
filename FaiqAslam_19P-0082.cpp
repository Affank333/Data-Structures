#include <iostream> 
using namespace std;
struct  Node
{
    int key;
    Node* next;
};
Node* newNode(int key)
{
    Node* new_node = new Node();
    new_node->key = key;
    new_node->next = NULL;
    return new_node;
}
void push(Node** head_ref, int new_key)
{
    Node* new_node = newNode(new_key);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
Node* addTwoLists(Node* temp1, Node* temp2)
{
    Node* result = NULL;
    Node* temp, * prev = NULL;
    int carry = 0, sum;
    while (temp1 != NULL || temp2 != NULL)
    {
        sum = carry + (temp1 ? temp1->key : 0) + (temp2 ? temp2->key : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        temp = newNode(sum);
        if (result == NULL)
            result = temp;
        else
            prev->next = temp;
        prev = temp;
        if (temp1)
            temp1 = temp1->next;
        if (temp2)
            temp2 = temp2->next;
    }
    if (carry > 0)
        temp->next = newNode(carry);
    return result;
}
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->key << " ";
        node = node->next;
    }
    cout << endl;
}
int main()
{
    Node* result = NULL;
    Node* temp1 = NULL;
    Node* temp2 = NULL;
    push(&temp1, 6);
    push(&temp1, 4);
    push(&temp1, 9);
    push(&temp1, 5);
    push(&temp1, 7);
    cout<<"First List :";
    printList(temp1);
    push(&temp2, 4);
    push(&temp2, 8);
    cout << "Second List : ";
    printList(temp2);
    result = addTwoLists(temp1, temp2);
    cout << "resultant list ";
    printList(result);
    return 0;
}
