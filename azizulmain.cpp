#include <iostream>
using namespace std;

int main ()
{
    int i, j, w [100], b [100], W, r, n, az [100] [100];

    cin >> n;
    cout << "Enter the weights please: ";
    for (i = 1; i <= n; i++) cin >> w [i];
    cout << "Enter the Cost please: ";
    for (i = 1; i <= n; i++) cin >> b [i];
    cout << "Enter knapsack weight please: ";
    cin >> W;

    for (i = 0; i <= W; i++) az [0] [i];
    for (i = 0; i <= n; i++) az [i] [0];

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= W; j++) {
            if (w [i] <= j) {
                if (b [i] + az [i - 1] [j - w [i]] > az [i - 1] [j]) az [i] [j] = b [i] + az [i - 1] [j - w [i]];
                else az [i] [j] = az [i - 1] [j];
            }
            else az [i] [j] = az [i - 1] [j];
        }
    }

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= W; j++) {
            cout << az [i] [j] << ' ';
        }
        cout << '\n';
    }
}
