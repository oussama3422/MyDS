#include<iostream>

using namespace std;



void Merge(int arr[],int l,int m,int r)
{
 int i=l;
 int j=m+1;
 int k=l;
 int temp[k];
 while(i<=m && j<=r)
 {
 	if(arr[i]<=arr[j])
 	{
 		temp[k]=arr[i];
 		i++;
		 k++;
	}
	else
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
 	
 }
 while(i<=m)
 {
 	temp[k]=arr[i];
	 i++;
	 k++;
 }
 while(j<=r)
 {
 temp[k]=arr[j];
  j++;
  k++;	
 }	
 for(int t=l;t<=r;i++)
 {
 	arr[t]=temp[t];
 }
	
}

void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		Merge(arr,l,m,r);
	}
}
int main()
{
	int size;
	int left;
	cout<<"Enter Size of Array :: > ";
	cin>>size;
	int arr[size];
	cout<<"Enter Start value is Just two Choses 1 or 0 :: > ";cin>>left;
	cout<<"Enter The Element :: > "<<endl;
	cout<<":::::> \t";
	for(int i=0;i<=size;i++)
	{ 
	    
		cin>>arr[i];
		cout<<":::::> \t";
	}
	cout<<endl<<":::::::::::The Array Before Sorting ::::::::::::::\n";
	for(int i=0;i<=size;i++)
	{ 
		cout<<arr[i]<<"  ";
	}
	cout<<endl<<":::::::::::The Array After Sorting ::::::::::::::\n";
	mergeSort(arr,0,5);
	for(int h=0;h<=5;h++)
	{ 
		cout<<arr[h]<<"  ";
	}
}
