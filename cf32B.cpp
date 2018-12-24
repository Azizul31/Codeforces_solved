#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=s.length();
    for(int i=0;i<x;i++)
    {
        if(s[i]=='.')
        {
            cout<<"0";
        }
        if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<"1";
            i++;
        }
        if(s[i]=='-' && s[i+1]=='-')
        {
            cout<<"2";
            i++;
        }


    }
}
