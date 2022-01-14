// 1111
//  222
//   33
//    4

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k=n;
     int cnt=1;
    for (int i = 0; i <n; i++)
    {


          int s = i;
        while (s)
        {
            cout << " ";
            s--;
        }

        for(int j=1; j<=k;j++)
        {
           cout<<cnt;
        }
           cnt++; 
          
    
        k--;
                 
        
      
        
        cout << endl;
    }
}
