#include<iostream>
using namespace std;
int main()
{
    int s[3][3]={{1,1,1},{1,1,1},{1,1,1}},x[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>x[i][j];

        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(x[i][j]%2==1)
            {
                s[i-1][j-1]=0;
                s[i-1][j]=0;
                s[i-1][j+1]=0;
                s[i][j-1]=0;
                s[i][j]=0;
                s[i][j+1]=0;
                s[i+1][j-1]=0;
                s[i+1][j]=0;
                s[i+1][j+1]=0;

            }
         else  if(x[i][j]!=0 && x[i][j]%2==0)
            {
                s[i-1][j-1]=1;
                s[i-1][j]=1;
                s[i-1][j+1]=1;
                s[i][j-1]=1;
                 s[i][j]=1;
                s[i][j+1]=1;
                s[i+1][j-1]=1;
                s[i+1][j]=1;
                s[i+1][j+1]=1;

            }

        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<s[i][j];

        }
        cout<<endl;
    }

}
