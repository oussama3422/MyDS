#include<iostream>

using namespace std;

class Queue{
private:
	int rear;
	int front;
	int arr[6];
public:
	Queue(){
		rear=-1;
		front=-1;
		for(int i=0;i<6;i++){
			arr[i]=0;
		}
	}
	
	bool isEmpty(){
		if(front==-1 && rear==-1){
			return true;
		}
		else{
			return false;
		}
	}
	bool isFull(){
		if(rear==5){
			return true;
		}
		else{
			return false;
		}
	}
	void enqueue(int value){
		if(isFull()){
			cout<<"The Queue Overflow"<<endl;
		}
		else if(isEmpty()){
			rear=front=0;
			arr[rear]=value;
		}
		else {
			rear++;	
			arr[rear]=value;
		}
		
	}
   int dequeue(){
		int temp;
		if(isEmpty()){
			cout<<"The Queue Is UnderFlow"<<endl;
			return 0;  
		}else if(rear==front){
			temp=arr[front];
			arr[front]=0;
			front=rear=-1;
//			return temp;
		}else{
			temp=arr[front];
			arr[front]=0;
			front++;
//			return temp;
		}
		return temp;
	}
	int count(){
		if(isEmpty()){
			cout<<"The Queue UnderFlow"<<endl;
		}
		else{
			return (rear-front+1);
		}
	}
	void Display(){		
		for(int i=0;i<5;i++){
			cout<<arr[i]<<" ";
		}
	}

};



int main(){
	Queue Q1;
		int option,position,value;
	do{
		cout<<"\nWhat Operation do you want to perform?Select Optiion number.Enter 0 to exit";
		cout<<"\n1) Enqueue()";
		cout<<"\n2) dequeue()";
		cout<<"\n3) isEmpty()";
		cout<<"\n4) isFull()";
		cout<<"\n5) Count() ";
		cout<<"\n6) display() ";
		cout<<"\n7) clear Screen";
		cout<<"\nselect Optiion number ::> ";
		cin>>option;
	switch(option){
			case 1:
				cout<<"Enter Value That you Will Enqueue To Queue ::> ";
				cin>>value;
				Q1.enqueue(value);
				break;
			case 2:
				cout<<"You are Dequeue "<<Q1.dequeue()<<" Value"<<endl;
				break;
			case 3:
				if(Q1.isEmpty()){
					cout<<"\nThe Queue Is Empty"<<endl;
				}
				else{
					cout<<"\nThe Queue Is Not Empty"<<endl;
				}
				break;
			case 4:
				if(Q1.isFull()){
					cout<<"\nThe Queue Is Full"<<endl;
				}
				else{
					cout<<"\nThe Queue Is Not Full"<<endl;
				}
				break;
		    case 5:
				cout<<"The Position That You Arrived Is "<<Q1.count()<<endl;
			case 6:
				cout<<"::: Data Print As it Is :::"<<endl;
				Q1.Display();
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
