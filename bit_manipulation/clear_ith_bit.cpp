#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int N,i;
    cin>>N>>i;
    cout<<N<<endl;
    int mask=~(1<<i);
    N=N&mask;
    cout<<N<<endl;
    return 0;
}