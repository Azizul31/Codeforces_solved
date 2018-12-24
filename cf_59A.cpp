#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=65 && s[i]<=90 )
        x++;

        if(s[i]>=97 && s[i]<=122 )
        y++;

    }
    for(int i=0;i<s.length();i++)
    {
        if(x>y && (s[i]>=97 && s[i]<=122))
        s[i]=s[i]-32;

        if(x<y && (s[i]>=65 && s[i]<=90))
        s[i]=s[i]+32;

    }
    cout<<s<<endl;

}
