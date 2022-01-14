//ABC
//BCD
//CDF



#include<iostream>
using namespace std;

    int main()
    {
        int n;
         cin>>n;
       
        for(int i=0;i<n;i++)
        {
             
            
            char k='A'+i;
            for(int j=1;j<=n;j++)
            {
                
            cout<<k;
                k++;
             
            }
            
            
            cout<<endl;
        }      

    }
 