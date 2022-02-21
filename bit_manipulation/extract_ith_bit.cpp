#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int N,i;
    cin>>N>>i;

    int mask=1<<i;
    if((N & mask)==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }
    return 0;
}