#include<iostream>
#define SPACE 4
using namespace std;


class TreeNode{
	
	public:
		int data;
		TreeNode *left;
		TreeNode *right;
		
	TreeNode()
	{
		data=0;
		left=NULL;
		right=NULL;
		
	}
	TreeNode(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
	
	
};
class BST{
	public:
		TreeNode *root;
		
	bool isEmpty()
	{
		if(root=NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void InsertTreeNode(TreeNode *new_node)
	{
		
		if(root==NULL)
		{
		  root=new_node;
		  cout<<"The data Inserted as Root Node"<<endl;
		}
		else
		{
			TreeNode *temp=root;
			while(temp!=NULL)
			{
				if(new_node->data==temp->data)
				{
					cout<<"We have Same data In The Tree"<<endl;
					return ;
				}
				else if((new_node->data < temp->data) && (temp->left==NULL) )
				{
					temp->left=new_node;
					cout<<"The Node Insert To the Left"<<endl;
					break;
				}
				else if(new_node->data < temp->data)
				{
					temp=temp->left;
				}
				else if((new_node->data > temp->data) && (temp->right==NULL))
				{
					temp->right=new_node;
					cout<<"The Node Insert To the Right"<<endl;
					break;
					
				}
				else
				{
					temp=temp->right;
				}
			}
		}
		
		
	}
	void Print_Two_Dimention(TreeNode *root,int space )
	{
		if(root==NULL)
		{
			return;
		}
		else
		{
			space +=SPACE;
			Print_Two_Dimention(root->right,space);
			cout<<endl;
			for(int i=SPACE;i<space;i++)
			   {
			     cout<<"  ";	
			   }
			cout<<root->data<<"\n";
			Print_Two_Dimention(root->left,space);
		}
	}
//	::::::::::::::::::Deapth First Search  ::::PreOrder(Root,Left,Right):::::::::::::::::::
    void PrintPreOrder(TreeNode *root)
   {
   
   
	if(root==NULL)
      { 
   	      return;
      }
      else
      {
      	cout<<root->data<<"  ";
      	PrintPreOrder(root->left);
      	PrintPreOrder(root->right);
	  }

   }
//   ::::::::::::::::::::::::::::::::::::::InOrder Traversal:::::::::::::::::::::::::::://
   void PrintInOrder(TreeNode *root)
   {
   	if(root==NULL)
   	{
   	  return;	
	}
	else
	{
		PrintInOrder(root->left);
		cout<<root->data<<" ";
		PrintInOrder(root->right);
	}
   }
//   ::::::::::::::::::::::::::::::::::::::: PostOrder Traversal::::::::::::::::::::::::::://
  void PrintPostOrder(TreeNode *root)
   {
   	if(root==NULL)
   	{
   	  return;	
	}
	else
	{
		PrintInOrder(root->left);
		PrintInOrder(root->right);
		cout<<root->data<<" ";
	}
   }
   
};

int main()
{
	BST BST1;
	int option,val;
	cout<<"\n::::::::::::::::::::Program Start::::::::::::::::::::::::"<<endl;
	do{
		cout<<"\n1. Insert Node \n";
		cout<<"2. Search Node \n";
		cout<<"3. Delete Node \n";
		cout<<"4. Print BST Value \n";
		cout<<"5. Clear Screen \n";
		cout<<"6. PreOrder Traverse \n";
		cout<<"7. InOrder Traverse \n";
		cout<<"8. PostOrder Traverse \n";
		
		cout<<"Enter The Option include "<<endl;
        cout<<"<:::::::::::::::::::::>\t";
		cin>>option;
		
		
		TreeNode *new_node=new TreeNode();
		switch(option)
		{
			case 0:
				cout<<"Oops!!!"<<endl;
				break;
			case 1:
				cout<<"::::::::::::::::::INSERT:::::::::::::::::::"<<endl;
				cout<<"Enter Value Of Tree Node to Insert in BST ::> ";
				cin>>val;
				new_node->data=val;
				BST1.InsertTreeNode(new_node);
				break;
			case 2:
				break;
			case 3:
				break;
			case 4 :
				cout<<"\n:::::::::::::::PRINT::::::::::::::::::::::"<<endl;
				BST1.Print_Two_Dimention(BST1.root,4);
				break;
			case 5:
				system("cls");
				break;
			case 6:
				cout<<"::::::::DFS(Deapth First Search)::::PreOrder(Root,Left,Right)::::::"<<endl;
				cout<<":::::: PreOrder ::::::::>\t";
				BST1.PrintPreOrder(BST1.root);
				cout<<endl;
				break;
			case 7:
				cout<<"::::::::DFS(Deapth First Search)::::InOrder(Left,Root,Right)::::::"<<endl;
				cout<<":::::: InOrder ::::::::>\t";
				BST1.PrintInOrder(BST1.root);
				cout<<endl;
				break;
			case 8:
				cout<<"::::::::DFS(Deapth First Search)::::PostOrder(Left,Root,Root)::::::"<<endl;
				cout<<":::::: PostOrder ::::::::>\t";
				BST1.PrintPostOrder(BST1.root);
				cout<<endl;
				break;
			default:
				cout<<"\nEnter The Proper Option!!"<<endl;
		}
		
		
	}while(option!=0);
	
	
}
