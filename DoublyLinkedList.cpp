#include<iostream>

using namespace std;




class Node{
public:
	int data;
	int key;
	Node *previous;
	Node *next;
	
	Node(){
		data=0;
		key=0;
		previous=NULL;
		next=NULL;
	}
	Node(int k,int d)
	{
		key=k;
		data=d;
	}
};
class DoublyLinkedList{
	
	
	public:
		Node *head;
		DoublyLinkedList()
		{
			head=NULL;
		}
		DoublyLinkedList(Node *n)
		{
			head=n;
		}
//	   .1 Check if node Exists using key value
		Node *checkIfNodeExits(int k)
		{
			Node *tmp=NULL;
			Node *ptr=head;
		    while(ptr!=NULL)
		    {
		    	if(ptr->key==k){
		    		tmp=ptr;
				}
				ptr=ptr->next;
			}
			return tmp;
		}
//	    2. Append a Node to the List
		void appendNode(Node *n)
		{
			if(checkIfNodeExits(n->key)!=NULL)
			{
				cout<<"Node Already Exits with key value : "<<n->key<<".Append another node with different Key Value"<<endl;

			}
			else
			{
				if(head==NULL)
				{
					head=n;
					cout<<"Node Appended as Head Node"<<endl;
				}
				else{
					Node *ptr=head;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
					}
					ptr->next=n;
					n->previous=ptr;
					cout<<"Node Appended Successfully"<<endl;
				}
			}
		}
//		3.prepend Node -Attach a node at the start
		void prependNode(Node *n){
			 if(checkIfNodeExits(n->key)!=NULL)
			{
				cout<<"Node Already Exits with key value : "<<n->key<<".Append another node with different Key Value"<<endl;

			}
			else{
				if(head==NULL)
				{
					head=n;
					cout<<"Node Prepended Successfully as Head Node"<<endl;
				}
				else
				{
				head->previous=n;
				n->next=head;
				head=n;
				cout<<"The Node Prepended Successfully"<<endl;
			    }
			}
		}
//		4. Insert After A particular node in the List
		void insertNodeAfter(int k,Node *n)
		{
			Node *ptr=checkIfNodeExits(k);
			if(ptr==NULL)
			{
				cout<<"No Node exits With Key Value : "<<k<<endl;
			}
			else
			{
				if(checkIfNodeExits(n->key)!=NULL)
				{
					cout<<"Node Already exists With Key Value : "<<n->key<<".Append Another Node With different Key Value"<<endl;
				}
				else{
					
					Node *nextNode=ptr->next; 
					if(nextNode==NULL)
					{
						ptr->next=n;
						n->previous=ptr;
						cout<<"Node Inserted At The End Successfully"<<endl;
					}
					else
					{
						n->next=nextNode;
						nextNode->previous=n;
						n->previous=ptr;
						ptr->next=n;
						cout<<"Node Inserted In Between"<<endl;
					}
				}
			}
		}
//		5.delete Node By unique Key.Basically De-Link not delete
		void deleteNodeByKey(int k)
		{
			Node *ptr=checkIfNodeExits(k);
			if(ptr==NULL)
			{
				cout<<"Node node exits with key value"<<endl;
			}
			else
			{
				if(head->key==k)
				{
					head=head->next;
					cout<<" Node Unlinked With Keys Value : "<<k<<endl;
				}
				else
				{
					Node *nextNode=ptr->next;
					Node *prevNode=ptr->previous;
					//deleting at the End
					if(nextNode==NULL)
					{
					 prevNode->next=NULL;			
					 delete ptr;
					 cout<<"Node Deleted at the End";
					}
                     // deleting in Between						
					else 
					{
					 prevNode->next=nextNode;
					 nextNode->previous=prevNode;
					 cout<<"Deleted Node Successfully"<<endl;
					}				
				}
			}
		}
//		.6)Update Node
		void updateNodeByKey(int k,int value)
		{
			Node *ptr=checkIfNodeExits(k);
			if(ptr!=NULL)
			{
				ptr->data=value;
				cout<<"Data Node Updated Successfully"<<endl;
				
			}
			else
			{
				cout<<"Node Doesn't Exists with Key Value"<<endl;
			}
		}
//		 .7) Display Method
		void display(){
			if(head==NULL)
			{
				cout<<"The Doubly Linked List Is Too Empty"<<endl;
			}
			else
			{
				cout<<"\nThe Doubly Linked List Data It Will Be Display Like "<<endl;
				Node *ptr=head;
				while(ptr!=NULL)
				{
					cout<<"["<<ptr->data<<"]"<<"--->";
					ptr=ptr->next;
				}
			}
		}


};


int main(){
	DoublyLinkedList DL1;
		int option,key1,k1,data1;
	do{
		cout<<"\nWhat Operation do you want to perform?Select Optiion number.Enter 0 to exit";
		cout<<"\n1) appendNode()";
		cout<<"\n2) PrependNode()";
		cout<<"\n3) InsertNodeAfter()";
		cout<<"\n4) DeleteNodeByKey()";
		cout<<"\n5) updateNodeByKey() ";
		cout<<"\n6) display() ";
		cout<<"\n7) clear Screen";
		cout<<"\nselect Optiion number ::> ";
		cin>>option;
		Node *n1=new Node();
	switch(option){
			case 1:
				cout<<"Enter Key To Doubly Linked List  ::> ";
				cin>>key1;
				cout<<"Enter The Data To DLL ::> ";
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				DL1.appendNode(n1);
				break;
			case 2:
				cout<<"Prepend Node Opreation It Mean Insert At Bigining\nEnter The Key ::> "<<endl;
				cin>>key1;
				n1->data=key1;
				cout<<"Enter Node Value ";
				cin>>k1;
				n1->key=k1;
				DL1.prependNode(n1);
				break;
			case 3:
				cout<<"Insert Node After Method\nEnter The Key That You Will Add To DLL ::> ";
				cin>>k1;
				cout<<"Enter Key of the New Node First ::> ";
				cin>>key1;
				cout<<"Enter Data Of The New Node Second ::> ";
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				DL1.insertNodeAfter(k1,n1);
				break;
			case 4:
			     cout<<"Delete Node By Key Method\nEnter Key of The Node to be deleted ::> ";
				 cin>>k1;
				 DL1.deleteNodeByKey(k1);
				break;
		    case 5:
				cout<<"The Updated Node By Key Method\nEnter The Unique Key To Updated ::> ";
				cin>>key1;
				cout<<"Enter The Data To Be Updated ::> ";
				cin>>data1;
				DL1.updateNodeByKey(key1,data1);
				break;
			case 6:
				DL1.display();
				break;
		
			case 7:
				system("cls");
				break;
			default:
				cout<<"\nChoose Another Option You are Out of options chooses"<<endl;
				break;
		}
	}while(option!=0);
	
	
	
	
}
