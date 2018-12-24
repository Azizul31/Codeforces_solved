#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int p[100],q;
    cin>>q;
    if(q%2==1)
    {
        cout<<"-1"<<endl;
    }
    else {
            for(int i=1;i<=100;i++)
    {
        p[i]!=i;
        p[p[i]]=i;
        cout<<p[i];
    }
    }


}
