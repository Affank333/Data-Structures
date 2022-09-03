#include<iostream>
using namespace std;
struct node {
	node *left;
	node*head;
	node *right;
	int info;
};
class tree {
	public:
		node *head;
		void BST() {
			if(head->left->info < head->right->info && head->right->info > head->left->info) {
				cout<<"This tree is BST"<<endl;
			}

			if(head->left->left=head->left->right && head->right->right=head->right->left) {
				cout<<"The numbers of nodes are equal"<<endl;
			}
		}
};
int main() {
	tree  l;
	l.BST();
}
