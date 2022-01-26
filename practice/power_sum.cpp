#include<bits/stdc++.h>
using namespace std;
void solution(int arr[],int N)
{
    sort(arr,arr+N);
    while(N--)
    {
      if(arr[N]/2!=arr[N-1])
      {
        for(int i=0;i<N;i++)
        {
            arr[i]*2;
        }
      }
    }
    
   
    
}
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    solution(arr,N);
    return 0;
}