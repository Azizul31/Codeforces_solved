#include<iostream>

using namespace std;

int main()
{
    int a,b[1000],c[1000],i;
    cin>>a;

    for( i=1;i<=a;i++)
    {
        cin>>b[i]>>c[i];

}
for(i=1;i<=a;i++)
{
    if(b[i]<c[i])
            cout<<"<"<<endl;

        if(b[i]>c[i])
            cout<<">"<<endl;

        if(b[i]==c[i])
            cout<<"="<<endl;

}
}


