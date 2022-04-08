#include<iostream>


using namespace std;

void selectionSort(int arr[],int n)
{
	
	
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
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
void printArray(int arr[],int length){
	
	for(int i=0;i<length;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
//	int arr[6]={9,5,3,2,1,4};
	int length;
	cout<<"Enter Length Of Array ::> ";
	cin>>length;
	int arr[length];
	for(int i=0;i<length;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n::::::::::The Array Before Sorted It Will Be Like This::::\n";
	printArray(arr,length);
	selectionSort(arr,length);
    cout<<"\n::::::::The Array After Sorted It Will Be Like This:::::::::::::\n";
    printArray(arr,length);
	
}
