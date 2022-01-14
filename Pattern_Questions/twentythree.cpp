//    1
//   22
//  333
// 4444

#include <iostream>
using namespace std;
int cnt = 1;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
    
    int s = n - i;
    while (s)
    {
        cout << " ";
        s--;
    }
    for(int j=1;j<=i;j++)
    
    {
        cout << cnt;
    }
    cnt++;
  cout << endl;
    }

  
}

