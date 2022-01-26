#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reverse(char ch[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }

}

int length(char ch[])
{
    int cnt=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    int cnt=0;
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
     int n=length(name);
    cout<<"Length of your name is"<<length(name)<<endl;
    reverse(name,n);
    cout<<name;
    return 0;
}