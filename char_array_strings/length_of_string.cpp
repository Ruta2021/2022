#include<iostream>
using namespace std;

int main()
{
    int cnt=0;
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    for(int i=0;name[i]!='\0';i++)
    {
        cnt++;
    }
    cout<<"Hi"<<" "<<name<<endl;
    cout<<"Your name length is"<<" "<<cnt;
    return 0;
}