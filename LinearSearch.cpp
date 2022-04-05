#include<iostream>

using namespace std;

void LinearSearch(int arr[],int key,int n)
{
	int tmp=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			cout<<"The Element Found At Index :::> "<<i+1<<endl;
			tmp=0;
			break;
		}
	}
	if(tmp==-1)
	{
		cout<<"\nThe Elemnet that will Be Search For it No Found !!!!!"<<endl;
	}
	
	
	
	
	
}




int main()
{
	cout<<":::::::::::::::Run Small Program Test Linear Search Example::::::::::::"<<endl;
	int n;
	int key;
	cout<<"Enter Number Of Element :::> ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{	cout<<"\t :::::> \t";
		cin>>arr[i];
		
	}
	cout<<"Enter The Element You Want Search for It ::> ";
	cin>>key;
	LinearSearch(arr,key,n);
}
