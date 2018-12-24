#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int number[10000],temporary[10000];
void mergesort(int low,int high)
{
if(low==high)
    {
        return;
    }
  int mid=(low+high)/2;

    mergesort(low,mid);
    mergesort(mid+1,high);

    int i,j,k;
    for(i=low,j=mid+1,k=low;k<=high;k++)
    {
        if(i==mid+1)
        {
            temporary[k]=number[j++];

        }
        else if(j==high+1)
        {
            temporary[k]=number[i++];
        }
        else if(number[i]<number[j])
        {
            temporary[k]=number[i++];
        }
        else
        {
            temporary[k]=number[j++];
        }
    }
    for(k=low;k<=high;k++)
    {
        number[k]=temporary[k];
    }
}

int main()
{
    int n;
    cout<<"How many element you want to sort?: ";
    cin>>n;
    cout<<"Elements:";
    for(int i=1;i<=n;i++)
    {
        cin>>number[i];
    }
    mergesort(1,n);
    cout<<"The Sorted elements are :\n";
    for(int i=1;i<=n;i++)
    {
        cout<<number[i]<<" ";
    }
    return 0;
}

