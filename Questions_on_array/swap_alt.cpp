#include<bits/stdC++.h>
using namespace std;

void swap(int arr[],int n)
{
    if(n%2==0)
    {
    for( int i=0;i<n;i=i+2)
    {
        swap(arr[i],arr[i+1]);
    }
    }
    else
    for( int i=0;i<n-1;i=i+2)
    {
        swap(arr[i],arr[i+1]);
    }
    
}

void printarray(int arr[],int n)
{
 for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
}
cout<<endl;
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int arr1[5]={1,2,3,4,5};
    swap(arr,6);
    swap(arr1,5);
    printarray(arr,6);
    printarray(arr,5);
    return 0;
}