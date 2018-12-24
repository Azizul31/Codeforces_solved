#include<bits/stdc++.h>
using namespace std;
struct job{
int nm,d,v;
};
bool cmp(job a,job b)
{
    return a.v>b.v;
}
main()
{
    int n,dmax=0;
    cin>>n;
    job j[n];
     int t[dmax+1]={0};
    for(int i=0;i<n;i++)
        {
            cout<<"Job No : "<<i+1<<endl;
            j[i].nm=i+1;
            cout<<"Deadline: ";
            cin>>j[i].d;
            cout<<"Value: ";
            cin>>j[i].v;
        }
    sort(j,j+n,cmp);
    for(int i=0;i<n;i++)
        if(dmax<j[i].d)dmax=j[i].d;
   int val[dmax+1],k;
    for(int i=0;i<n;i++)
    {
        k=min(dmax,j[i].d);
        while(k>=1)
        {
            if(t[k]==0)
                {t[k]=j[i].nm;val[k]=j[i].v;break;}
            else k--;
        }
    }
    int s=0;
    for(int i=1;i<=dmax;i++)
    {
        if(t[i]!=0)
        {
            cout<<"job no: ";
            cout<<t[i]<<" ";
            s=s+val[i];
        }
    }
    cout<<endl<<"Maximum Profit : ";
    cout<<s;
}
