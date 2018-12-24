#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int x,p[100],q[100],y;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<x;i++)
    {
        q[i]=p[i];
    }
    sort(q,q+x);
    for(int i=0;i<x;i++)
    {
        y=0;
        int c=0;
        if (p[i]==q[0] && p[i]<p[i+1])
           c=p[i+1];
           p[i+1]=p[i];
           p[i]=c;
           c=0;
           y++;
        if(p[i]==q[x-1] && p[i]>p[i+1])
           c=p[i+1];
           p[i+1]=p[i];
           p[i]=c;
           c=0;
           y++;

    }
}
