#include<iostream>

using namespace std;


void BinarySearch(int arr[],int k,int n)
{
	int left=0;
	int right=n;
	int tmp=-1;
	while(left<=right)
	{
		int mid=left+(right-left)/2;
		if(arr[mid]==k)
		{
			tmp=0;
			cout<<"The Element Found At midlle At "<<mid<<"\n";
			break;
		}
		else if(arr[mid]<k)
		{
			left=mid+1;
		}
		else{
			right=mid-1;
		}
		
		
	}
	if(tmp==-1)
	{
	cout<<"Element Not Found "<<endl;	
	}
	
}



int main()
{
	cout<<"::::::::::::::::::::: Run Small Program Test Binary Search Example ::::::::::::::::::"<<endl;
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
	BinarySearch(arr,k,n);
	
	
	
	
}
