#include<iostream>
using namespace std;
class Node{
	
	public:
		int data;
		int key;
		Node *next;
	
	Node(){
		data=0;
		key=0;
		next=NULL;
	}
	Node(int d,int k)
	{
		data=k;
		key=k;
		next=NULL;
	}
	
	
};

class CircularQueueUseLinkedList{
	
	public:
		Node *front;
		Node *rear;
		CircularQueueUseLinkedList()
		{
			front=NULL;
			rear=NULL;
		}
//		:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		bool isEmpty()
	      {
		if(front==NULL && rear==NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
     	}
//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::	
	checkIfNodeExist(Node* n)
	{
		Node *temp=front;
		bool exist=false;
		
		do{
			if(temp->key==n->key)
			{
				exist=true;
				break;
			}
			temp=temp->next;
		}while(temp!=front);
		return exist; 
		
		
	}
//	:::::::::::enqueue Method::::::::::::::::::::::::::::::::
	void enqueue(Node *n)
	{
		if(isEmpty())
		{
			front=n;
			rear=n;
			cout<<"The Node Enqueue Successfully\n";
		}
		else if(checkIfNodeExist(n))
		{
			cout<<"This Node Exist\n";
			cout<<"The Key is Matched with key Exist!!\nTry With Another Key\n";
		}
		else
		{
			 rear->next=n;
			 rear=n;
			 n->next=front;
			 cout<<"The Node Enqueue Successfully\n";
		}
	}
//	:::::::::::Dequeue Method::::::::::::::::::::::::::::::::

    Node* Dequeue()
	
	{
		Node* temp=NULL;
		if(isEmpty())
		{
			cout<<"Queue is Empty\n";
			return NULL;
		}
		else{
			if(front==rear)
			{
				temp=front;
				front=NULL;
				rear=NULL;
				return temp;
			}
			else
			{
				temp=front;
				front=front->next;
				rear->next=front; 
				return temp;
			}
		}
	}
	
	int count()
	{
	int count=0;
    Node *temp=front;
	  do {
	     count++;
		 temp=temp->next;	
	    }	while(temp!=front);	
	   return count;
	}	
	
	void display()
	{
		if(isEmpty())
		{
			cout<<"The Queue is Empty"<<endl;
			
		} 
		else{
			cout<<"::::::::::::::print data::::::::::"<<endl;
			Node *temp=front;
			do{
				cout<<"("<<temp->key<<","<<temp->data<<")"<<"->";
				temp=temp->next;
			}while(temp!=front);
//			cout<<"("<<temp->key<<","<<temp->data<<")"<<"->";
			cout<<endl;
		}
	}
	
	
};



int main()
{
	CircularQueueUseLinkedList q;
	int option,value,key;
	do{
		cout<<"\nWhat Operation do you want to perform ? Select Optiion number.Enter 0 to exit";
		cout<<"\n1) Enqueue()";
		cout<<"\n2) Dequeue()";
		cout<<"\n3) isEmpty()";
		cout<<"\n4) Count()";
		cout<<"\n5) display() ";
		cout<<"\n6) clear Screen";
		cout<<"\n select Optiion number ::> ";
		cin>>option;

		Node *new_node=new Node;
		switch(option)
		{  
			case 1:
			    cout<<"\n Enqueue Method Called"<<endl;
				cout<<"Enter Value That you Will Enqueue To Stack ::> ";
				cin>>value;
				cout<<"\nEnter Key That you Will Enqueue With This Value ::> ";
				cin>>key;
				new_node->key=key;
				new_node->data=value;
				q.enqueue(new_node);
				break;
			case 2:
				cout<<"\n::: Dequeue Method CALLED :::"<<endl;
				new_node=q.Dequeue();
				cout<<"The Value That Dequeue is ::> "<<new_node->key<<","<<new_node->data<<")";
				delete new_node;
				cout<<endl;
				break;
			case 3:
				if(q.isEmpty()){
					cout<<"\nthe Queue is Empty"<<endl;
				}
				else{
					cout<<"\nThe Queue Is Not Empty"<<endl;
				}
				break;
			case 4:
				cout<<" - COUNT METHOD CALLED -"<<endl;
				cout<<"Number of nodes in Queue\t"<<q.count()<<endl;
				break;
			case 5:
				q.display();
				break;
			case 6:
				system("cls");
				break;
			default:
				cout<<"\nChoose Another Option !!! You Are Out Of Range !!! "<<endl;
				break;
		}
		
	}while(option!=0);
	 
}

