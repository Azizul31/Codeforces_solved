#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b[1000],c[1000],d[1000];
    cin>>a;
    if(a<=25)
    {
    for(int i=1;i<=a;i++)
    {
        cin>>b[i];
        c[i]=b[i]/2;
        d[i]=abs(c[i]-b[i]);

    }

    for(int i=1;i<=a;i++)
    {
        if(c[i]<=10 && d[i]<=10 && b[i]>=0 && b[i]<=20 )
        {
        cout<<d[i]<<" "<<c[i]<<endl;
        }
    }
    }
}
