#include<iostream>
using namespace std;
// Deletion function
int deletion(int arr[],int size,int index)
{
	for(int i=index;i<size-1;i++)
	{	
		arr[i]=arr[i+1];
	}
	return 1;
}
// traverse code 
void display(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[100]={11,13,17,19,27};
	int size=5,index=4;
	display(arr,size);
	deletion(arr,size,index);
	size-=1;
	display(arr,size);
	return 0;
}
