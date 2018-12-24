#include<iostream>
using namespace std;

int main()
{
    string s1;
    string s2;

    cout<<"  First string : ";
    cin>>s1;
    cout<<endl;

    cout<<" Second string : ";
    cin>>s2;

    int i,j;
    int p[s2.size()+1][s1.size()+1];


    for(i=0;i<=s1.size();i++)
        p[0][i]=0;

    for(i=0;i<=s2.size();i++)
        p[i][0]=0;

    for(i=1;i<=s2.size();i++)
    {
        for(j=1;j<=s1.size();j++)
        {
            if(s1[i-1]==s2[j-1])
            p[i][j]=p[i-1][j-1]+1;

            else
            {
                if(p[i][j-1]>p[i-1][j])
                p[i][j]=p[i][j-1];

                else
                p[i][j]=p[i-1][j];
            }

        }

    }
    cout<<i<<j;
    cout<<"\n\n The longest common subsequence is : "<<p[i-1][j-1]<<endl;

    return 0;

}

