//111
//222
//333
#include<iostream>
using namespace std;

    int main()
    {
        int n;
         cin>>n;
        int k=1;
       
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                cout<<k;
            }
            k++;
            cout<<endl;
        }      

    }