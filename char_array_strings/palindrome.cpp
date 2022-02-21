#include<bits/stdc++.h>
#include<iostream>
using namespace std;
char tolowercase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkpalindrome(char ch[],int n)
{
    int k=n-1;
    int i=0;
    while(i<=k){
        if(tolowercase(ch[i])!=tolowercase(ch[k]))
        {
            return false;
        }
        else{
            i++;
            k--;
            
        }
         
    }
   return true; 
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
    
    cout<<name;
    cout<<"is or not"<<" "<<checkpalindrome(name,n);
    cout<<"Charater to lower case is "<<tolowercase('b')<<endl;
     cout<<"Charater to lower case is "<<tolowercase('A')<<endl;
    return 0;
}