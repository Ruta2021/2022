// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
       int l=n;
    for (int i =1; i <=n; i++)
    {
    int k=n-i+1;
    int cnt=1;
      for(int j=1;j<=k;j++)
    
    {
        cout << cnt;
        cnt++;
    }
    k--;
    int s = i-1;
    while (s)
    {
        cout << "*";
        s--;
    }

    int t = i-1;
    while (t)
    {
        cout << "*";
        t--;
    }


  int c=l;
  for(int j=1;j<=l;j++)
    
    {
        cout << c;
         c--;
    }
   l--;
    
  cout << endl;
    }

  
}

