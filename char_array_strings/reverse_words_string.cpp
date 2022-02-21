#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void reverseWords(string s)
{
    vector<string,int>v;
    string str=" ";
    for(int i=0;i<s.length();i++)
    {
       if(s[i]=='.')
       {
           v.push_back(str);
           str=" ";
       }
       else
       {
           str=str+s[i];
       }
    }
    v.push_back(str);
    int j;
    for(j=0;j<v.size();j++)
    {
        cout<<v[j]<<endl;
    }
}
int main()
{
    string s = "i.like.this.program.very.much";
    reverseWords(s);
    return 0;
}