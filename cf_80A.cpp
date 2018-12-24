#include<iostream>
using namespace std;
int main()
{
    int x,y,a=0,b=0,c=0;
    string s;
    cin>>x>>y;
    for(int i=1;i<=y;i++)
    {
        if(y%i==0)
        {
            a++;
        }
    }
    if(a>2)
    {
        cout<<"NO";
    }
   if(a<=2)
    {
    for(int i=x+1;i<y;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                b++;
            }

    }
    if(b<=2)
    {
        cout<<"NO";
        break;
    }
b=0;
c++;

}

if(a<=2 && c==y-x-1)
{
    cout<<"YES";
}
    }

    return 0;
   }




