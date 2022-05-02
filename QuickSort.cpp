 #include<iostream>
 
 
 using namespace std;

//:::::::::::::::Swap Function:::::::::::::::::::::::::://

// :::::::::::::Build Partition Sort::::::::::::::::::::://

int Partition(int arr[],int start,int end)
{
	int pivot=arr[end];
	int pIndex=start;
	
	for(int i=start;i<end-1;i++)
	{
		
		
		if(arr[i]<=pivot)
		{
			swap(arr[i],arr[pIndex]);
			pIndex++;
		}
	}
	swap(arr[end],arr[pIndex]);
	return pIndex;
}



// :::::::::::: Build QuickSort:::::::::::::::::::::::://
void QuickSort(int arr[],int start,int end)
{
	if(start<end)
	{
	int p=Partition(arr,start,end);
	QuickSort(arr,start,(p-1));//recursive QuickSort call left partition
	QuickSort(arr,(p+1),end);//recursive QuickSort call for right partition
    } 
}
 

 
 int main()
{
	
	int arr[5]={9,5,4,3,2};
	cout<<"::::::::::::::::::::Before Sorting:::::::::::::::::::::::::"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" | ";
	}
	cout<<"\n::::::::::::::::::::After Sorting:::::::::::::::::::::::::"<<endl;
	QuickSort(arr,0,5);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" | ";
	}
	
	
}
