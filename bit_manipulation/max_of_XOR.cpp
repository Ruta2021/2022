
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,K;
    cin>>N>>K;
    int XOR=0;
    int maxi=0;
    int arr[N];
    for(int i=1;i<N;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int j=0;
    while(j<N)
    {
         XOR=XOR^arr[j];
        if(j-i+1<K)
        {
            j++;
        }
        else if(j-i+1==K)
        {
            maxi=max(XOR,maxi);
            
            i++;
             j++;
        }

        
    }
    cout<<maxi;
   return 0;
}