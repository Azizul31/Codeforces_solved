#include<iostream>
using namespace std;
int main()
{
    int a,b[1000],c[1000],j;
    cin>>a;
    if(a<=125){
        for(j=1;j<=a;j++)
        {
            cin>>b[j]>>c[j];
        }
                for(j=1;j<=a;j++)
        {
            if(b[j]<=10 && c[j]<=10)
            cout<<"Case "<<j<<": "<<b[j]+c[j]<<endl;
        }
    }
}




