//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
       
    for (int i = 1; i <= n; i++)
    {
   
    int s = n-i;
    while (s)
    {
        cout << " ";
        s--;
    }
     int cnt = 1;
     int k=i;
    for(int j=1;j<=k;j++)
    
    {
        cout << cnt;
        cnt++;
    }
    k--;
    int z=i-1;
    while(z)
    {
        cout<<z;
        z--;
    }
  cout << endl;
    }

  
}

