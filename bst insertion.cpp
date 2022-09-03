#include<iostream>
using namespace std;
struct node
{
	int info;
	node *left;
	node *right;	
};
class tree
{
	private:
		node *temp;
		public:
			node *root;
			int number;
			void newnode()
			{
				node *newnode=new node;
			}
			void check_root_is_null(node *temp,int number)
			{
				if(root==NULL)
				{
					temp=new node;
					temp->info=number;
					temp->left=NULL;
						temp->right=NULL;
						root=temp;
						return;
				}
				if(temp->info==number)
				{
					cout<<"Enter the correct value"<<endl;
					return;
				}
				if(temp->info>number)
				{
					if(temp->left!=NULL)
					{
						check_root_is_null(temp->left,number);
						return;
					}
					else
					{
						temp->left=newnode;
						temp->left->info=number;
						temp->left->left=NULL:
							temp->left->right=NULL;
						return;
					}
				} 
			if(temp->info<number)
			{
				if(temp->right!=NULL
				{
					check_root_is_NULL;
					return;
				}
				else
				{
					temp->right=newnode;
					temp-right->info=newnode;
					temp->right->right=NULL;
					temp->right->left=NULL;
					return;
				}
			}
			}
			void inorder(node *temp)
			{
				if(root=NULL)
				{
					cout<<"The tree is empty";
					return; 
				}
				if(temp->left!=NULL)
				{
					inorder(temp->left)
					cout<<temp->info<<endl;
				}
				if(temp->right!=NULL)
				{
					inorder(temp->right)
					return;
				}
			}
		}

	
};
int main()
{
	tree t;
	t.check_root_is__null(5);
	t.inorder();
	system("pause");
	return 0; 
}
