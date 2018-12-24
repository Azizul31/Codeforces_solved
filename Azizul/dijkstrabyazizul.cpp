#include<bits/stdc++.h>
using namespace std;
int n;
int mn(int dis[],bool ck[])
{
     int a=INT_MAX,in;
    for(int i=0;i<n;i++)
    {
        if(dis[i]<a && ck[i]==false )

             a=dis[i],in=i;

    }
            return in;
}
main()
{
    int e,x,y,w;
    cin>>n>>e;
    int g[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            g[i][j]=0;
        }
    }
    for(int i=0;i<e;i++)
    {

            cin>>x>>y>>w;
            g[x][y]=w;
            g[y][x]=w;

    }
    int dis[n];
    bool ck[n];
    for(int i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
        ck[i]=false;
    }
    dis[0]=0;
        for(int i=0;i<n-1;i++)
        {
            int u=mn(dis,ck);
            cout<<u;
             ck[u]=true;
         for(int i=0;i<n;i++)
         {
             if(g[u][i]!=0 && ck[i]==false && dis[u]+g[u][i]<dis[i])
             {
                 dis[i]=dis[u]+g[u][i];
             }
         }
        }
        for(int i=0;i<n;i++)
        {
            cout<<i<<" "<<dis[i]<<endl;
        }
}
