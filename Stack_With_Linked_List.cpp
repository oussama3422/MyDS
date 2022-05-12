#include<iostream>

using namespace std;


class Node {
  public:
  	int data;
  	int key;
  	Node *next;
  	Node()
  	{
  	  data=0;
	  key=0;
	  next=NULL;	
	}
	Node(int d,int k)
	{
		data=d;
		key=k;
		next=NULL;
	}
};

class Stack{
		
	public:
	int top=0;
	mystack(){
		top=0;
	}
	bool isEmpty(){
		if(top==NULL){
			return true;
		}else 
			return false;
	}
	bool isExistWithThisKey(Node *n)
	{
		Node* temp=top;
	    int exist=false;
	    while(temp!=NULL)
	    {
	    	if(temp->key==n->key)
	    	{
	    		exist=true;
	    		break;
			}
			temp=temp->next;
		}
		return exist;
	}
	void push(Node* n){
		if(isEmpty(){
			top=n;
			n->next=NULL;
		}
		else if(isExitsWithThisKey(n))
		{
			cout<<"This Key Is Exits!!\nTry With Another Key"<<endl;
		}
		else{
			Node *temp=top;
			top=n;
			temp->next=n;
			n->next=NULL;
			cout<<"The Node Pushed Successfully"<<endl;
		}
	}
	Node* pop(){
		Node *temp;
		if(isEmpty()){
			cout<<"Stack UnderFlow"<<endl;
			return temp;
		}
		else{
			temp=top;
			top=top->next;
			return temp;
			delete temp;
		}
	}
	int count(){
		return(top+1);
	}
	int peek(){
		if(isEmpty()){
			cout<<"Stack underflow"<<endl;
			return NULL;
		}
		else{
			return top;
		}
	}
	int display(){
		cout<<"All value that is In the Stack As it is : "<<endl;
		for(int i=5;i>=0;i--){
			cout<<arr[i]<<endl;
		}
		
	}
	int Count()
	{
		int count=0;
		Node *temp=top;
		while(temp!=NULL)
		{
			count++;
			temp=temp->next;
		}
	}
	
};




	
int main()
{
	Stack s1;
	int option,value,key;
	do{
		cout<<"What Operation do you want to perform?Select Optiion number.Enter 0 to exit";
		cout<<"\n1) push()";
		cout<<"\n2) pop()";
		cout<<"\n3) isEmpty()";
		cout<<"\n5) display() ";
		cout<<"\n6) clear Screen";
		cout<<"\n select Optiion number ::> ";
		cin>>option;
		
		Node *new_node=new Node;
		switch(option)
		{
				case 1:
				cout<<"Enter Value That you Will Push To Stack ::> ";
				cin>>value;
				cout<<"Enter Key That you Will Push With This Value ::> ";
				cin>>key;
				new_node->key=key;
				new_node->data=value;
				obj1.push(new_node);
				break;
			case 2:
				cout<<"::: Called Pop Method :::"<<endl;
				new_node=s1.pop()
				cout<<"The Value That Poped is ::> "<<new_node;
				break;
			case 3:
				if(s1.isEmpty()){
					cout<<"\nthe stack is Empty"<<endl;
				}
				else{
					cout<<"\nThe Stack Is Not Empty"<<endl;
				}
				break;
			case 4:
				cout<<":::>\t print data \t:::";
				obj1.display();
				break;
			case 5:
				system("cls");
				break;
			default:
				cout<<"\nChoose Another Option !!! You Are Out Of Range !!! "<<endl;
				break;
		}
		
	}while(option!=0);
}

