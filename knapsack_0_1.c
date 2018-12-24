#include <iostream>
using namespace std;

int main ()
{
    int i, j, w [100], b [100], W, r, n, dp [100] [100];

    cout << "Enter number of items: ";
    cin >> n;
    cout << "Enter weights: ";
    for (i = 1; i <= n; i++) cin >> w [i];
    cout << "Enter cost: ";
    for (i = 1; i <= n; i++) cin >> b [i];
    cout << "Enter knapsack weight: ";
    cin >> W;

    for (i = 0; i <= W; i++) dp [0] [i];
    for (i = 0; i <= n; i++) dp [i] [0];

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= W; j++) {
            if (w [i] <= j) {
                if (b [i] + dp [i - 1] [j - w [i]] > dp [i - 1] [j]) dp [i] [j] = b [i] + dp [i - 1] [j - w [i]];
                else dp [i] [j] = dp [i - 1] [j];
            }
            else dp [i] [j] = dp [i - 1] [j];
        }
    }

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= W; j++) {
            cout << dp [i] [j] << ' ';
        }
        cout << '\n';
    }
    i = n;
    j = W;
    cout << "Maximum benefit: " << dp [i] [j] << endl << endl;

    cout << "The taken elements are: ";
    while (i > 0 && b > 0)
    {
        if (dp [i] [j] != dp [i - 1] [j])
        {
            cout << i << " ";
            i--;
            j = j - w [i];
        }
        else i--;
    }
    cout << '\n';
}








