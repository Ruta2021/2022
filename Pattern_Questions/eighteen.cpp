
//D
//CD
//CDE
//ABCD
#include<iostream>
using namespace std;

    int main()
    {
        int n;
         cin>>n;
       
        int r=n;
          for(int i=0;i<n;i++)
        {
               
         
            char k='A'+r-1;
            for(int j=0;j<=i;j++)
            { 

               cout<<k;
               k++;
            
            }
               r--;
            cout<<endl;
        }      

    }
         
        
 