#include<iostream>
using namespace std;
int main()
{
    int a,b,f,c,d,e=0;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>f;
    cin>>d;
    for(int i=1;i<=d;i++)
    {
        if((i%a)==0 || (i%b)==0 || (i%c)==0 || (i%f)==0)
        {
            e++;
        }
    }
    cout<<e;
}
