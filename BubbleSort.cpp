#include<iostream>


using namespace std;


void BubbleSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				count=1;
			}
		}
		if(count=0)
		{
			break;
		}
	}
	
}
int main()
{
	int length;
//	int arr[5]={6,8,4,3,2};
	cout<<"Enter Length Off array ::> ";
	cin>>length;
	int arr[length];
	cout<<"Enter Now The Element \n";
	for(int i=0;i<length;i++)
	{
		cout<<" :::> ";
		cin>>arr[i];
	}
	cout<<"\nBefore Sorting Array Is Like That :::>"<<endl;
	for(int i=0;i<length;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"\nAfter Sorting Array Is Like That :::>"<<endl;
	BubbleSort(arr,length);
    for(int i=0;i<length;i++)
	{
		cout<<arr[i]<<"   ";
	}
	
}
