#include<iostream>

using namespace std;

void selectionsort1(int arr[],int n)
{
	
	for(int i=0;i<n-1;i++)
	{
		
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min])
			{
			  min=j;	
			}
			
		}
		if(min!=i)
		{
			swap(arr[min],arr[i]);
		}
	}
}


int main()
{
	int arr[5]={9,4,2,1,8};
	selectionsort1(arr,5);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
}
