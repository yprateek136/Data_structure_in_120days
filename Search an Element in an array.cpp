// Search an Element in an array.cpp
#include<stdio.h>
int search(int arr[], int N, int X)
{
        
    // Your code here
    for(int i=0;i<N;i++)
    {
        if(arr[i]==X)
            return i;
    }
    return -1;
}


// { Driver Code Starts.

int main()
{
    int testcases;
    scanf("%d", &testcases);
    while(testcases--)
    {
        int sizeOfArray;
        scanf("%d", &sizeOfArray);
        int arr[sizeOfArray];
        int x;
        
        for(int i=0;i<sizeOfArray;i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &x);
        printf("%d\n", search(arr,sizeOfArray,x)); //Linear search
    }

    return 0;
    
}
