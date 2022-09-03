#include<iostream>
using namespace std;
struct node 
{
	node *left;
	node *right;
	int info;
};
class BST
{
private:
node *temp;
public:
node *root;
int value;
BST();
void search_BST(node *);
void insert_BST(node*);
};
void BST::insert_BST(node *temp)
{
	root=temp=NULL;
	if(root=NULL)
	{
		temp=new node;
		temp->info=value;
		temp->left==NULL;
		temp->right==NULL;
		root=temp;
		if(temp->info=value)
		{
			cout<<"V A P"<<endl;
			return;
		}
		if(temp->info<value)
		{
			if(temp->left==NULL)
			{
		  temp->left=new node;
		  temp->left->info=value;
		  temp->left->left==NULL;
		  temp->left->right==NULL;
			}
			else
			{
				insert_BST(temp->left);
                return;			
		}
		if(temp->info>value)
		{
			if(temp->right==NULL)
		    {
		    temp->right=new node;
			temp->right->info=value;
			temp->right->right==NULL;
			temp->right->left==NULL;	
				}	
				else
				{
					insert_BST(temp->right);
					return;
				}
		}
		}
	}
void BST::search_BST(node *temp)
{
	if(root==NULL)
	{
		cout<<"tree is empty"<<endl;
	return;
	}
	if(temp->left!=NULL)
	{
		if(root->info==number)
		{
			cout<<"N present"<<endl;
		}
		if(number<root->info)
		{
			if(temp->left->info==number)
			{
				cout<<temp->left->info;
			}
			else
			{
				search_BST(temp->left->left || temp->left->right);
				return;
			}
	}
		if(number>root->info)
		{
			if(temp->right->info==number)
			{
				cout<<temp->right->info;
			}
			else
			{
				search_BST(temp->right->right || temp->right->left);
				return;
			}
	}	
	}	
}
int main()
{
BST a;
cout<<"ENTER A VALUE"<<endl;	
cin>>a.value;
system("pause");
return 0;
}
