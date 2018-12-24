#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int p[100],q[100],c;
    cin>>c;
    if(c%2==1)
    {
        cout<<-1;
    }
    else
    {
        int s;
        s=c;
    for(int i=1;i<=c;i++)
    {
        p[i]=s;
        s--;
        cout<<p[i]<<"\t" ;
    }
    }
}
