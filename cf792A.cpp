#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b[1000],c[1000];
    for(int i=1;i<=a;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=a;i++)
    {
       c[i]= b[i]-b[i-1];
    }
}
