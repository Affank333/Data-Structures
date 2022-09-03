#include<iostream>
using namespace std;

struct node{
    int value;
    node *left,*right;
};

class BST{
    private:
        node *temp;
        int key;
    public:
        node *root;
        int value;
        BST();
        node* createNode(int);
        void options();
        void insertion(node*);
        void deletion(node*,int);
        void inOrder(node*);
};

BST::BST(){
    root=temp=NULL;
    value=key=0;
}

node* BST::createNode(int value){
    node *newNode=new node;
    newNode->value=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

void BST::options(){
    cout<<"********OPTIONS********"<<endl;
    cout<<"1-insertion"<<endl;
    cout<<"2-deletion"<<endl;
    cout<<"3-inorder"<<endl;
}

void BST::insertion(node* temp){

    if(root==NULL){
        temp=createNode(value);
        root=temp;
        return;      
    }

    if(temp->value==value){
        cout<<"Duplicate found!!!"<<endl;
        return;
    }

    if(value < temp->value){
        if(temp->left!=NULL){
           insertion(temp->left); 
        }else{
            temp->left=createNode(value);
        }
        return;
    }

    if(value > temp->value){
        if(temp->right!=NULL){
           insertion(temp->right); 
        }else{
            temp->right=createNode(value);
        }
        return;
    }
}

void BST::inOrder(node* temp){
    if(root==NULL){
        cout<<"tree is empty!!!"<<endl;
        return;
    }

    if(temp->left!=NULL)
        inOrder(temp->left);
        cout<<temp->value<<" ";
    if(temp->right!=NULL)
        inOrder(temp->right);
    
    return;
}

void BST::deletion(node *leafNode,int key){
    if(leafNode==NULL){
    	cout<<"The tree is empty."
        return; 
    }

    if(key < leafNode->value) {
    	
    	return deletion(leafNode->left, key); 
    }

    if(key > leafNode->value) {
    	return deletion(leafNode->right, key); 
    }

    if(leafNode->right==NULL && leafNode->left==NULL){
        delete leafNode;
        
        return; 
    }

    node* deleteNode=leafNode;

    if(leafNode->left!=NULL && leafNode->right == NULL){
        leafNode=leafNode->left;
        delete deleteNode;
        
        return; 
    }

    if(leafNode->right!=NULL && leafNode->left == NULL){
        leafNode=leafNode->right;
        
        delete deleteNode;

        return; 
    }
    node* currentRoot = leafNode;
    deleteNode = currentRoot->right;

    while(deleteNode->left != NULL) {
    	currentRoot = deleteNode;
    	deleteNode = deleteNode->left;
    }
    leafNode->value = deleteNode->value;
    currentRoot->left = NULL;

    delete deleteNode;
}

int main(){
    BST obj;
    int choice;
    int key;
    
    do{
        obj.options();
        cout<<"Enter your choice : ";
        cin>>choice;

        if(choice==1){
            cout<<"Enter number to insert: ";
            cin>>obj.value;
            obj.insertion(obj.root);
        }else if(choice==2){
            cout<<"Enter key: ";
            cin>>key;
            obj.deletion(obj.root,key);
        }else if(choice==3){
            obj.inOrder(obj.root);
        }else{
            exit(0);
        }
    }while(5);

    return 0;
}
