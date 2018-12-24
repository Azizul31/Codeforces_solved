#include<iostream>
using namespace std;
int main()
{
    int a,b[100],c[100],d=0;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b[i]>>c[i];
        if(c[i]-b[i]>=2)
        {
            d++;
        }
    }
    cout<<d;
}
