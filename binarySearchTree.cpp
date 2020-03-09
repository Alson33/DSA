#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

class BStree
{
	struct Node *root;
	
		public:
			BStree()
			{
				root->data = NULL;
				root->left = root->right = NULL;
			}
			
			struct Node *createRoot()
			{
				struct Node *root = new struct Node();
				root->data = NULL;
				return root;
			}
			
			bool insert(int data)
			{
				struct Node *root = createRoot();
					if(root->data == NULL)
					{
						root->data = data;
					}else if(root->data > data){
						root->left = data;
					}else if(root->data < data){
						root->right = data;
					}
				
				return true;
			}
			
			void traverse_inOrder() // left-root-right
			{
				struct Node *root = createRoot();
					if()
					{
							
					}
			}
			
			void traverse_preOrder()//root-left-right
			{
				//
			}
			
			void traverse_postOrder()//left-right-root
			{
				//
			}

			int deletion(int data)
			{
				//
			}
						
			~BStree()
			{
				//
			}
};

int main()
{
	int data = 0, choice = 1;
	BStree *bst = new BStree();
	
		while(choice != 0)
		{
			cout << "Enter a option: " << endl;
			cout << "1,Insert\n2,Delete\n3,InOrder_traverse\n4,PostOrder_traverse\n5,PreOrder_traverse\n";
			cout << "0,Exit" << endl;
			cin >> choice;
			
				switch(choice)
				{
					case 1:
						cout << "Enter data to insert: ";
						cin >> data;
							bst->insert(data);
							break;
					case 2:
						cout << "Enter data to insert: ";
						cin >> data;
							bst->deletion(data);					
							break;
					case 3:
						cout << "Data shown in Inorder traverse: " << endl;
							bst->traverse_inOrder();
							break;
					case 4:
						cout << "Data shown in Postorder traverse: " << endl;
							bst->traverse_postOrder();
							break;
					case 5:
						cout << "Data shown in Preorder traverse: " << endl;
							bst->traverse_preOrder();
							break;
				}
				
					if(choice < 0 || choice > 5)
					{
						cout << "Enter a valid option!!" << endl;
					}
		}
		
		delete bst;
		
		return 0;
}
