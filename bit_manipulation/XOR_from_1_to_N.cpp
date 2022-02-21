//Given N,print the XOR of all numbers between 1 to N
// I/P=5
// O/P=1^2^3^4^5 = 1

#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
    int N;
    cin>>N;
    if(N%4==1)
    {
        cout<<1;
    }
    if(N%4==2)
    {
        cout<<N+1;
    }
     if(N%4==3)
    {
        cout<<0;
    }
     if(N%4==0)
    {
        cout<<N;
    }

    return 0;
}
