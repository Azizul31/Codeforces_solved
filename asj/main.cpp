#include <iostream>
#include <string>
using namespace std;

main ()
{
   string a, b;
   int n, i, j, l;

   cin >> a;
   cin >> b;

    if (a.length () == b.length()) {
        j = a.length();
        for (i = 0; i < j; i++) {
            if (a [i] == b [i]) continue;
            else break;
        }
        if (i == j) cout << -1 << '\n';
        else cout << j << '\n';
   }
   else if (a.length () > b.length()) cout << a.length() << '\n';
   else if (a.length () < b.length()) cout << b.length() << '\n';
}
