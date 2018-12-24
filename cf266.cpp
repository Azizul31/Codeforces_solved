#include<iostream>
using namespace std;
int main()
{
    int a,b,d=0;
    cin>>a>>b;
    string c;
    cin>>c;
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(c[j]=='B' && c[j+1]=='G')
                {d=c[i];
            c[j]=c[i+1];
            c[j+1]=d;
                }
            else
            {
                c[j]=c[j];
                c[j+1]=c[j+1];
            }
        }
    }
    for(int j=1;j<=a;j++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<c[j];
        }
}
}
