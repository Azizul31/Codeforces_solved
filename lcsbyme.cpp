#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
 string s1,s2;
  cin>>s1>>s2;
  int m = s1.size();
  int n = s2.size();
  cout<<m<<endl;
  cout<<n<<endl;

  int L[m+1][n+1];
 for (int i=0; i<m+1; i++)
   {
     for (int j=0; j<n+1; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (s1[i-1] == s2[j-1])
         L[i][j] = L[i-1][j-1] + 1;
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
for (int i=0; i<=m; i++)
   {
     for (int j=0; j<=n; j++)
     {

       cout<<L[i][j]<<" " ;
     }
     cout<<endl;}
  cout<<L[m][n];




  return 0;
}

