#include<iostream>
using namespace std;
int main()
{
   string s,r,t;
   cin>>s;
   cin>>r;
   for(int i=0;i<s.length();i++)
   {
      if(s[i]==r[i])
      {
         t+='0';
      }
      else
      {
       t+='1';

      }

   }
    cout<<t;

}
