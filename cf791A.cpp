#include<iostream>
using namespace std;
int main()
{
    int a,b=0,c=0;
    cin>>a>>b;
    for(c=1;;c++)
    {
        a=a*3*c;
    b=b*2*c;
    if(a>b)
    {
        cout<<c;
         break;
    }

    }
}
