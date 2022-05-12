#include<iostream>



using namespace std;



void SearchFunction(int arr[],int n,int keyFound)
{
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==keyFound)
		{
			cout<<"The Value "<<arr[i]<<" Found At Index ::"<<keyFound;
			break;
		}
	
	}
	
	
	
}


int main()

{
	int length;
	int keyFound;
	int arr[length];
	cout<<"Enter Size Of Array ";
	cin>>length;
	cout<<"Enter Length of Number you want to sort :::> "<<endl;
	for(int i=0;i<length;i++)
	{
	     cin>>arr[i];
	}
	for(int i= 0;i<length;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
    cout<<"Enter key Value You Want To Found"<<endl;
	cin>>keyFound;
	SearchFunction(arr,length,keyFound);
	for(int i= 0;i<length;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
