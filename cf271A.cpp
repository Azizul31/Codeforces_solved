#include<iostream>
using namespace std;
int main()
{
int a=0,b=0,c=0,d=0,i,j;

cin>>j;
for(i=j;i<=9000;i++)
{
    i++;

    a=(i/1000)%10;
    b=(i/100)%10;
    c=(i/10)%10;
    d=(i/1)%10;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
    {
        break;
    }

}
cout<<i;
return 0;
}
