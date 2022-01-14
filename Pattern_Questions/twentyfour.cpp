// 1234
//  234
//   34
//    4

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k=n;
    for (int i = 1; i <= n; i++)
    {
   
    int s = i-1;
    while (s)
    {
        cout << " ";
        s--;
    }
     int cnt = i;
     
    for(int j=1;j<=k;j++)
    
    {
        cout << cnt;
        cnt++;
    }
    k--;
  cout << endl;
    }

  
}

