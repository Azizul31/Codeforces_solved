#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int j=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9')
        {
            j++;
        }

    }
    if(j>0)
    {
        cout<<"YES";
    }
    else {cout<<"NO";
}

}
