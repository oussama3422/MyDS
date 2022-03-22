#include<iostream>

using namespace std;


class mystack{
	private:
		int top;
		int arr[6];
	public:
	mystack(){
		top=-1;
		for(int i=0;i<6;i++){
			arr[i]=0;
		}
	}
	bool isEmpty(){
		if(top==-1){
			return true;
		}else 
			return false;
	}
	bool isFull(){
		if(top==5){
			return true;
		}else{
			return false;
		}
	}
	void push(int value){
		if(isFull()){
			cout<<"StackOverFlow"<<endl;
		}
		else{
			top++;
			arr[top]=value;
			
		}
	}
	int pop(){
		if(isEmpty()){
			cout<<"Stack UnderFlow"<<endl;
			return 0;
		}
		else{
			int newVal=arr[top];
			arr[top]=0;
			top--;
			return newVal;
			
		}
	}
	int count(){
		return(top+1);
	}
	int peek(int pos){
		if(isEmpty()){
			cout<<"Stack underflow"<<endl;
			return 0;
		}
		else{
			return arr[pos];
		}
	}
	void change(int pos,int Newvalue){
		arr[pos]=Newvalue;
		cout<<"The Value Changed In Positioned "<<pos<<endl;
	}
	int display(){
		cout<<"All value that is In the Stack As it is : "<<endl;
		for(int i=5;i>=0;i--){
			cout<<arr[i]<<endl;
		}
		
	}
	
};


int main(){
	mystack obj1;
	int option,position,value;
	do{
		cout<<"What Operation do you want to perform?Select Optiion number.Enter 0 to exit";
		cout<<"\n1) push()";
		cout<<"\n2) pop()";
		cout<<"\n3) isEmpty()";
		cout<<"\n4) isFull()";
		cout<<"\n5) peek() ";
		cout<<"\n6) change()";
		cout<<"\n7) display() ";
		cout<<"\n8) clear Screen";
		cout<<"\nselect Optiion number ::> ";
		cin>>option;
	switch(option){
			case 1:
				cout<<"Enter Value That you Will Push To Stack ::> ";
				cin>>value;
				obj1.push(value);
				break;
			case 2:
				obj1.pop();
				break;
			case 3:
				if(obj1.isEmpty()){
					cout<<"\nThe Stack Is Empty"<<endl;
				}
				else{
					cout<<"\nThe Stack Is Not Empty"<<endl;
				}
				break;
			case 4:
				if(obj1.isFull()){
					cout<<"\nThe Stack Is Full"<<endl;
				}
				else{
					cout<<"\nThe Stack Is Not Full"<<endl;
				}
				break;
			case 5:
				cout<<"\nEnter The Position That You will Peek ::> ";
				cin>>position;
				cout<<"\n This Position That you choose We Found in it Value ::> "<<obj1.peek(position)<<endl;
				break;
			case 6:
				cout<<"\nEnter Position That you will Put In int The New Value ::> ";
				cin>>position;
				cout<<"\nEnter Now The New Value ::> ";
				cin>>value;
				obj1.change(position,value);
				break;
			case 7:
				cout<<"::: Data Print As it Is :::";
				obj1.display();
				break;
			case 8:
				system("cls");
				break;
			default:
				cout<<"\nChoose Another Option You are Out of options chooses"<<endl;
				break;
		}
	}while(option!=0);
	
	
}
