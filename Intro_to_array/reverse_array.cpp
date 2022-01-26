#include<bits/stdC++.h>
using namespace std;

void reverse(int arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
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
     
     reverse(arr,6);
     printarray(arr,6);
int brr[5]={1,2,3,4,5};
     reverse(brr,5);
    printarray(brr,5);
     return 0;
 }