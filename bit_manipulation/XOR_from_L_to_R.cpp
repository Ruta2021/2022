//Given range L-R ,print the XOR (L^L+1.....^R-1^R)
//I/P->L=2 R=4 
//O/p->2^3^4=5


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int L,R;
    cin>>L>>R;
    int XORR=0;
    int l=L-1;
    int XORL=0;
//XOR(R)^XOR(L-1)

//XOR(R)
  if(R%4==1)
    {
       XORR= 1;
    }
    if(R%4==2)
    {
        XORR=R+1;
    }
     if(R%4==3)
    {
        XORR=0;
    }
     if(R%4==0)
    {
        XORR=R;
    }

//XOR(L-1)
if(l%4==1)
    {
       XORL= 1;
    }
    if(l%4==2)
    {
        XORL=l+1;
    }
     if(l%4==3)
    {
        XORL=0;
    }
     if(l%4==0)
    {
        XORL=l;
    }

//XOR(R)^XOR(L-1)
int ans=XORR^XORL;
cout<<ans;
return 0;
}