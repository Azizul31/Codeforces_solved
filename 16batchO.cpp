#include<iostream>
using namespace std;
int main()
{
    int a,b[1000],c[1000],i,d=0,e=0;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>b[i];
        cin>>c[i];
    }
    for(i=1;i<=b[i];i=i+2)
    {
       d= b[i]+b[i+2];

    }

    for(i=1;i<=c[i];i=i+2)
    {
        e=c[i]+c[i+2];

    }

cout<<d<<endl;
cout<<e<<endl;


}
