#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e=0,f=0,g=0,h=0,i=0,j=0,k=0;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    if(a==0 && b==0)
    {
        e=0;
    }
    if(a==0 && b==1)
    {
        e=1;
    }
    if(a==1 && b==0)
    {
        e=1;
    }
     if(a==1 && b==1)
    {
        e=1;
    }
     if(c==0 && d==0)
    {
        f=1;
    }
     if(c==1 && d==0)
    {
        f=0;
    }
     if(c==0 && d==1)
    {
        f=0;
    }
     if(c==1 && d==1)
    {
        f=0;
    }
    if(e==0 && f==0)
    {
        g=0;
    }

    if(e==0 && f==1)
    {
        g=0;
    }

    if(e==1 && f==0)
    {
        g=0;
    }

    if(e==1 && f==1)
    {
        g=1;
    }

    if(b==0 && c==0)
    {
        h=0;
    }

    if(b==0 && c==1)
    {
        h=0;
    }

    if(b==1 && c==0)
    {
        h=0;
    }

    if(b==1 && c==1)
    {
        h=1;
    }
    if(a==0 && d==0)
       {
           i=0;
       }

    if(a==0 && d==1)
       {
           i=1;
       }

    if(a==1 && d==0)
       {
           i=1;
       }

    if(a==1 && d==1)
       {
           i=1;
       }
       if(h==0 && i==0)
       {
           j=1;
       }
       if(h==0 && i==1)
       {
           j=0;
       }
       if(h==1 && i==0)
       {
           j=0;
       }
       if(h==1 && i==1)
       {
           j=0;
       }
       if(g==0 && j==0)
       {
           k=0;
       }

       if(g==0 && j==1)
       {
           k=1;
       }

       if(g==1 && j==0)
       {
           k=1;
       }

       if(g==1 && j==1)
       {
           k=1;
       }
       cout<<k;







return 0;
}
