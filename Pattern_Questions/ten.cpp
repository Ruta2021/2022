//1
//21
//321
//4321


#include<iostream>
using namespace std;

    int main()
    {
        int n;
         cin>>n;
         
       
        for(int i=1;i<=n;i++)
        {
            int k=i;
            for(int j=1;j<=i;j++)
            {
               cout<<k;
               k--;
            
            }
            
            cout<<endl;
        }      

    }
