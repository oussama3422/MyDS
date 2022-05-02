#include<iostream>


using namespace std;



shellSort2(int arr[],int n)
{
	    int total_process=0;
    	for(int gap=n/2;gap>0;gap/=2)
		  {
	          for(int j=gap;j<n;j+=1)
			  {
			     int temp=arr[j];
				 int i=0;
				 for(i=j;(i>=gap && arr[i-gap]>temp);i-=gap)
				 {
				 	arr[i]=arr[i-gap];
				 	total_process++;
				 }
				 arr[i]=temp;
				 total_process++;	
			  }	
			total_process++;  
		  }
     	 cout<<"\nTotal Passes :: > "<<total_process<<endl;
    
}
//:::::::::::::::::Bubble Sort::::::::::::::::::::::::::::::::://
void BubbleSort2(int arr[],int n)
{
	int total_process=0;
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
			total_process++;
		}
		total_process++;
		if(count=0)
		{
			break;
		}
	}
	cout<<"\nTotal Passes :: > "<<total_process<<endl;
	
}

int main()
{
	
//    int length;
	int arr[5]={6,2,3,4,1};
//	cout<<"Enter Length Off array ::> ";
//	cin>>length;
//	int arr[length];
//	cout<<"Enter Now The Element \n";
//	for(int i=0;i<5;i++)
//	{
//		cout<<" :::> ";
//		cin>>arr[i];
//	}
	cout<<"\nBefore Sorting Array Is Like That :::>"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"\n::::::::::::::::::::::::::::::::::::::::::::Bubble Sort:::::::::::::::::::::::::::"<<endl;
	cout<<"Shell Sort:::>";
//	cout<<"\nAfter Sorting::::"<<endl;
	shellSort2(arr,5);
    for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"\n::::::::::::::::::::::::::::::::::::::::::::Bubble Sort:::::::::::::::::::::::::::"<<endl;
	cout<<"Bubble Sort:::>";
//	cout<<"\nAfter Sorting::::"<<endl;
	BubbleSort2(arr,5);
    for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"   ";
	}
	
	
	
}
