// ****
//  ***
//   **
//    *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k=n;
    for (int i = 1; i <=n; i++)
    {


          int s = i;
        while (s)
        {
            cout << " ";
            s--;
        }

        int j = 1;
        while (j <= k)
        {
            cout << "*";
            j++;

        }
        k--;
      
        
        cout << endl;
    }
}
