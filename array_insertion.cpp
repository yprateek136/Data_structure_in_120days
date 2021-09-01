#include<iostream>
using namespace std;

int insertion(int arr[],int size,int index,int capacity,int element)
{
	if(size>=capacity)
	{
		return -1;
	}
	for(int i=size-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
		
	}
	arr[index]=element;
	return 1;
}
//DISPLAY ARRAY
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[100]={7,8,12,27,88};
	int size=5,index=3, element=45;
	display(arr,size);
	insertion(arr,size,index,100,element);
	size+=1;
	display(arr,size);
	return 0;
}
