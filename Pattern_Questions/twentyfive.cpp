//    1
//   23
//  456
// 78910

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
       int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
   
    int s = n-i;
    while (s)
    {
        cout << " ";
        s--;
    }
  
     int k=i;
    for(int j=1;j<=k;j++)
    
    {
        cout << cnt;
        cnt++;
    }
    k--;
  cout << endl;
    }

  
}

