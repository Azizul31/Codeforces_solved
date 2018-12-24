#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i,j;
    string a;
    string b;
    cout<<"Please input the first string:";
    cin>>a;
    cout<<"Please input the second string:";
    cin>>b;
    int c=a.size();
    int d=b.size();
    cout<<"Length of string number 1:";
    cout<<c<<endl;
    cout<<"Length of string number 2:";
    cout<<d<<endl;
    int L[c+1][d+1];
for(i=0;i<c+1;i++)
{
    for(j=0;j<d+1;j++)
    {
        if(i==0 || j==0)
        {
            L[i][j]=0;
        }
        else if(a[i-1]==b[j-1])
        {
            L[i][j]=L[i-1][j-1]+1;
        }
        else L[i][j]=max(L[i][j-1],L[i-1][j]);
    }
}
cout<<"The required table:"<<endl;
for(int i=0;i<=c;i++)
{
    for(j=0;j<=d;j++)
    {
       cout<< L[i][j]<<" ";


}
 cout<<endl;

}

cout<<"Answer is:"<<L[c][d];
}
