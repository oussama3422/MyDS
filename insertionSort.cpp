#include<iostream>

using namespace std;


insertionSort(int arr[],int n)
{
	
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		
		int j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
		
	}
	
}


int main()
{
	int arr[6]={9,5,2,3,1,7};
	insertionSort(arr,6);
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<"  ";
	}
	
	
}
