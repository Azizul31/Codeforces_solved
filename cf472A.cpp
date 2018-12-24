#include<iostream>
using namespace std;
int main()
{
    int a,b,c,m;
    cin>>a;
    if(a>=12)
    {
        b=a/2;
        for(int i=1;i<b;i++)
        {
        if(b%i==0)
        {
            m++;
        }
        }
        if(m>=2)
        {
            b=a/2;
        }
        if(m==1)
        {
            b=+1;
        }
        if(b==2)
        {
            b=b+1;
        }
        c=a-b;

    }
    cout<<b<<" "<<c<<endl;
}
