#include<iostream>


using namespace std;
int GetMax(int arr[],int size)
{
	int max=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
//::::::::::::::::::::::::::::::::::Couting Sort Function :::::::::::::::://


void countingSort(int arr[],int size,int div)
{
	int output[size];
//	int range=9;
	int countArr[10]={0};
//	for(int i=0;i<=range;i++)
//	{
//		countArr[i]=0;
//	}
	for(int i=0;i<size;i++)
	{
		countArr[arr[i]/div%10]++;
	}
	for(int i=1;i<10;i++)
	{
		countArr[i]=countArr[i]+countArr[i-1];
//		:::2::::3::::0:::::0::::::0
//      :::2::::5::::5:::::5::::::5
	}
	for(int i=size-1;i>=0;i--)
	{
		output[countArr[(arr[i]/div)%10]-1]=arr[i];
	}
	
	for(int i=0;i<size;i++)
	{
		arr[i]=output[i];
	}
}
//::::::::::::::::::::::::::Radix Sort Function ::::::::::::::::::::::::::::::://
RadixSort(int arr[],int size)
{
	int max=GetMax(arr,size);
	int div;
	for(div=1;max/div>0;div*=10)
	{
		countingSort(arr,size,div); 
	}
}


int main()
{
	int arr[6]={9,6,3,2,5,1};
	cout<<":::::::::::::Before Sorting::::::::::::::::::::"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" , ";
	}
	cout<<"]";
	cout<<"\n:::::::::::::After Sorting::::::::::::::::::::"<<endl;
	RadixSort(arr,6);
	cout<<"[";
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" , ";
	}
	cout<<"]";
	
	
}
